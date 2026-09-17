`timescale 1ns/1ps

module TB_I2C_MASTER;

    localparam int CLK_HZ   = 50_000_000;
    localparam int I2C_HZ   = 100_000;
    localparam int NUM_REGS = 9;

    logic clk;
    logic rst_n;

    logic i2c_scl;
    tri1  i2c_sda;

    logic config_done;
    logic i2c_nack_error;

    // Mô hình slave chỉ cần điều khiển SDA theo kiểu open-drain.
    logic slave_sda_drive_low;
    assign i2c_sda = slave_sda_drive_low ? 1'b0 : 1'bz;

    logic [15:0] expected_words [0:NUM_REGS-1];
    logic [7:0]  rx_bytes      [0:2];
    logic [7:0]  rx_byte;

    integer transaction_count;
    integer error_count;

    I2C_MASTER #(
        .CLK_HZ   (CLK_HZ),
        .I2C_HZ   (I2C_HZ),
        .NUM_REGS (NUM_REGS)
    ) dut (
        .clk            (clk),
        .rst_n          (rst_n),
        .i2c_scl        (i2c_scl),
        .i2c_sda        (i2c_sda),
        .config_done    (config_done),
        .i2c_nack_error (i2c_nack_error)
    );

    // Clock hệ thống 50 MHz.
    initial begin
        clk = 1'b0;
        forever #10 clk = ~clk;
    end

    // Bảng dữ liệu mong đợi phải giống bảng cấu hình trong DUT.
    initial begin
        expected_words[0] = 16'h1E00;
        expected_words[1] = 16'h0C00;
        expected_words[2] = 16'h0E00;
        expected_words[3] = 16'h1000;
        expected_words[4] = 16'h0810;
        expected_words[5] = 16'h0A00;
        expected_words[6] = 16'h0479;
        expected_words[7] = 16'h0679;
        expected_words[8] = 16'h1201;
    end

    // Reset được nhả ngay sau một cạnh lên của clock hệ thống.
    initial begin
        rst_n              = 1'b0;
        slave_sda_drive_low = 1'b0;
        transaction_count  = 0;
        error_count        = 0;

        repeat (10) @(posedge clk);
        rst_n <= 1'b1;
    end

    // ---------------------------------------------------------------
    // Mô hình WM8731 đơn giản:
    //   1. Phát hiện START.
    //   2. Nhận ba byte: address+W, DATA[15:8], DATA[7:0].
    //   3. Trả ACK sau từng byte.
    //   4. Kiểm tra dữ liệu nhận được.
    // ---------------------------------------------------------------
    initial begin : slave_model
        integer byte_index;
        integer bit_index;

        forever begin
            // START là cạnh xuống SDA trong khi SCL đang cao.
            @(negedge i2c_sda);

            if (i2c_scl === 1'b1) begin
                for (byte_index = 0; byte_index < 3; byte_index = byte_index + 1) begin
                    rx_byte = 8'h00;

                    // Master truyền MSB trước; SDA hợp lệ tại cạnh lên SCL.
                    for (bit_index = 7; bit_index >= 0; bit_index = bit_index - 1) begin
                        @(posedge i2c_scl);
                        rx_byte[bit_index] = i2c_sda;
                    end

                    rx_bytes[byte_index] = rx_byte;

                    // Sau cạnh xuống của bit thứ 8, slave kéo SDA xuống ACK.
                    @(negedge i2c_scl);
                    slave_sda_drive_low = 1'b1;

                    // Giữ ACK trong toàn bộ xung SCL thứ 9 rồi thả SDA.
                    @(negedge i2c_scl);
                    slave_sda_drive_low = 1'b0;
                end

                $display("[%0t] Transaction %0d: address=%02h, word=%02h%02h",
                         $time,
                         transaction_count,
                         rx_bytes[0],
                         rx_bytes[1],
                         rx_bytes[2]);

                // 7'h1A + write bit 0 = 8'h34.
                if (rx_bytes[0] !== 8'h34) begin
                    $error("Sai address byte: expected=34, actual=%02h", rx_bytes[0]);
                    error_count = error_count + 1;
                end

                if (transaction_count >= NUM_REGS) begin
                    $error("DUT phát nhiều hơn %0d transaction", NUM_REGS);
                    error_count = error_count + 1;
                end else if ({rx_bytes[1], rx_bytes[2]} !==
                             expected_words[transaction_count]) begin
                    $error("Sai control word[%0d]: expected=%04h, actual=%02h%02h",
                           transaction_count,
                           expected_words[transaction_count],
                           rx_bytes[1],
                           rx_bytes[2]);
                    error_count = error_count + 1;
                end

                transaction_count = transaction_count + 1;
            end
        end
    end

    // Testcase ACK_ALL: slave ACK tất cả 27 byte của 9 transaction.
    initial begin : testcase_ack_all
        wait (rst_n === 1'b1);

        fork
            begin : wait_for_completion
                wait ((config_done === 1'b1) || (i2c_nack_error === 1'b1));

                // Chờ thêm một ít để các biến scoreboard ổn định.
                 @(posedge clk);
                 @(posedge clk);

                if (i2c_nack_error !== 1'b0) begin
                    $error("DUT báo NACK dù slave luôn trả ACK");
                    error_count = error_count + 1;
                end

                if (config_done !== 1'b1) begin
                    $error("config_done không được assert");
                    error_count = error_count + 1;
                end

                if (transaction_count != NUM_REGS) begin
                    $error("Sai số transaction: expected=%0d, actual=%0d",
                           NUM_REGS, transaction_count);
                    error_count = error_count + 1;
                end

                if (error_count == 0) begin
                    $display("====================================================");
                    $display("TEST ACK_ALL: PASS");
                    $display("Đã nhận đúng %0d transaction và config_done=1", NUM_REGS);
                    $display("====================================================");
                end else begin
                    $fatal(1, "TEST ACK_ALL: FAIL - có %0d lỗi", error_count);
                end

                $finish;
            end

            begin : timeout_guard
                // Toàn bộ cấu hình mất khoảng 2.6 ms; 10 ms là đủ rộng.
                #10_000_000;
                $fatal(1, "TEST ACK_ALL: TIMEOUT");
            end
        join_any

        disable fork;
    end

    // Bật bằng +define+DUMP_VCD (Questa) hoặc -DDUMP_VCD (Icarus).
    initial begin
        $dumpfile("TB_I2C_MASTER.vcd");
        $dumpvars(0, TB_I2C_MASTER);
    end

endmodule
