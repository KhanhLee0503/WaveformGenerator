`timescale 1ns/1ps

module I2C_MASTER#(
    parameter CLK_HZ   = 50_000_000,
    parameter I2C_HZ   = 100_000
)(
    input  logic        I_CLK,
    input  logic        I_RST_N,

    inout  tri1         IO_I2C_SCL,
    inout  tri1         IO_I2C_SDA,

    output logic        O_CONFIG_DONE,     // len 1 khi ghi xong TOAN BO thanh ghi, KHONG co loi ACK nao
    output logic        O_I2C_NACK_ERROR   // len 1 va GIU NGUYEN neu bat ky byte nao bi NACK - qua trinh dung han
);

    // -------------------------------------------------------------------
    // Bo chia xung: SUA LOI LECH 1 CHU KY - truoc day dieu kien la
    // "r_div_cnt == CLK_DIV" (dem tu 0..CLK_DIV, tong cong CLK_DIV+1 gia tri,
    // tuc la chu ky thuc te dai hon 1 clock so voi tinh toan). Sua lai bang
    // "r_div_cnt == CLK_DIV-1" de dung chinh xac CLK_DIV chu ky moi tick.
    // -------------------------------------------------------------------
    localparam int CLK_DIV = CLK_HZ / (I2C_HZ * 4);   // 125 Clock Cycles = 1 Tick
    localparam logic [6:0] WM8731_I2C_ADDR = 7'h1A;

    logic [$clog2(CLK_DIV+1)-1:0] r_div_cnt;
    logic [1:0]                   r_tick;
    logic                         w_tick_en;

    logic [15:0]                  r_reg_table [0:8];
    logic [1:0]                   r_byte_idx;
    logic [2:0]                   r_bit_idx;
    logic [3:0]                   r_reg_idx;
    logic                         r_ack_bit;        // gia tri SDA doc duoc trong cua so ACK (0=ACK, 1=NACK)

    logic                         r_sda_release;
    logic                         r_scl_release; 

    logic [7:0]                   w_addr_byte;
    logic [7:0]                   w_hi_byte;
    logic [7:0]                   w_lo_byte;
    logic [7:0]                   w_curr_byte;
    
    //Initialize CODEC config value
    initial begin
        r_reg_table[0] = 16'h1E00;
        r_reg_table[1] = 16'h0C00;
        r_reg_table[2] = 16'h0E00;
        r_reg_table[3] = 16'h1000;
        r_reg_table[4] = 16'h0810;
        r_reg_table[5] = 16'h0A00;
        r_reg_table[6] = 16'h0479;
        r_reg_table[7] = 16'h0679;
        r_reg_table[8] = 16'h1201;
    end

    //FSM State Declaration
    typedef enum logic [3:0] {
        ST_IDLE, 
        ST_START, 
        ST_SEND_BYTE, 
        ST_WAIT_ACK,
        ST_STOP, 
        ST_NEXT_REG, 
        ST_DONE,
        ST_STOP_ERR, 
        ST_ERROR
    } state_t;

    state_t r_state, w_next_state;

    //Clock Divider
    always_ff @(posedge I_CLK or negedge I_RST_N) begin
        if (!I_RST_N) begin
            r_div_cnt <= '0;
            r_tick    <= '0;
        end else if (r_div_cnt == CLK_DIV-1) begin     //125 clk thì r_tick + 1
            r_div_cnt <= '0;
            r_tick    <= r_tick + 1'b1;
        end else begin
            r_div_cnt <= r_div_cnt + 1'b1;
        end
    end

    assign w_tick_en   = (r_div_cnt == CLK_DIV-1);

    //Act as a BUFFER (1: High-z | 0: Zero)
    assign IO_I2C_SCL  = r_scl_release ? 1'bz : 1'b0;
    assign IO_I2C_SDA  = r_sda_release ? 1'bz : 1'b0;

    //Register Bank's Address
    assign w_addr_byte = {WM8731_I2C_ADDR, 1'b0};
    assign w_hi_byte   = r_reg_table[r_reg_idx][15:8];
    assign w_lo_byte   = r_reg_table[r_reg_idx][7:0];

    always_comb begin
        unique case (r_byte_idx)
            2'd0:    w_curr_byte = w_addr_byte;
            2'd1:    w_curr_byte = w_hi_byte;
            default: w_curr_byte = w_lo_byte;
        endcase
    end

    // Finite State Machines
    always_ff @(posedge I_CLK or negedge I_RST_N) begin
        if (!I_RST_N) 
            r_state <= ST_IDLE;
        else if (w_tick_en) 
            r_state <= w_next_state;
    end

    always_comb begin
        w_next_state = r_state;
        unique case (r_state)
            ST_IDLE:       w_next_state = ST_START;

            ST_START: begin
                if (r_tick == 2'd3) 
                    w_next_state = ST_SEND_BYTE;
            end

            ST_SEND_BYTE: begin
                if (r_tick == 2'd3 && r_bit_idx == 3'd0) 
                    w_next_state = ST_WAIT_ACK;
            end 

            ST_WAIT_ACK:  begin
                if (r_tick == 2'd3) begin
                    if (r_ack_bit) 
                        w_next_state = ST_STOP_ERR;         // NACK -> dung khan cap
                    else if (r_byte_idx == 2'd2) 
                        w_next_state = ST_STOP;
                    else 
                        w_next_state = ST_SEND_BYTE;
                end
            end             

            ST_STOP: begin
                if (r_tick == 2'd3) 
                    w_next_state = ST_NEXT_REG;
            end                  
            
            ST_STOP_ERR: begin
                if (r_tick == 2'd3) 
                    w_next_state = ST_ERROR;
            end              
            
            ST_NEXT_REG: begin
                if (r_reg_idx == 8) 
                    w_next_state = ST_DONE;
                else                       
                    w_next_state = ST_START;
            end              
            
            ST_DONE:       w_next_state = ST_DONE;
            ST_ERROR:      w_next_state = ST_ERROR;

            default:       w_next_state = ST_IDLE;
        endcase
    end

    always_ff @(posedge I_CLK or negedge I_RST_N) begin
        if (!I_RST_N) begin
            r_scl_release   <= 1'b1;
            r_sda_release    <= 1'b1;      // THA SDA khi reset - khong chu dong day len 1
            r_byte_idx       <= 2'd0;
            r_bit_idx        <= 3'd7;
            r_reg_idx        <= 4'd0;
            r_ack_bit        <= 1'b0;
            O_CONFIG_DONE    <= 1'b0;
            O_I2C_NACK_ERROR <= 1'b0;
        end 
        else if (w_tick_en) begin
            unique case (r_state)

                ST_IDLE: begin
                    r_scl_release  <= 1'b1;
                    r_sda_release   <= 1'b1;   // THA (khong chu dong day 1)
                    r_byte_idx      <= 2'd0;
                    r_bit_idx       <= 3'd7;
                end

                ST_START: begin
                    unique case (r_tick)
                        2'd0: begin 
                            r_sda_release  <= 1'b1; 
                            r_scl_release <= 1'b1; 
                        end        // tha, dien tro giu muc 1
                        2'd1: begin 
                            r_sda_release  <= 1'b0; 
                        end      // CHU DONG keo xuong 0 = START
                        2'd2: begin 
                            r_scl_release <= 1'b0; 
                        end
                        2'd3: begin 
                            r_bit_idx      <= 3'd7; 
                        end
                    endcase
                end

                ST_SEND_BYTE: begin
                    unique case (r_tick)
                        // Open-drain
                        2'd0: begin
                            r_sda_release  <= w_curr_byte[r_bit_idx];
                        end
                        2'd1: begin 
                            r_scl_release <= 1'b1; 
                        end
                        2'd2: begin 
                            r_scl_release <= 1'b0; 
                        end
                        2'd3: begin
                            if (r_bit_idx == 3'd0) 
                                r_bit_idx  <= 3'd7;
                            else                  
                                r_bit_idx  <= r_bit_idx - 3'd1;
                        end
                    endcase
                end

                // Tha SDA de doc bit ACK/NACK tu slave, VA THUC SU DOC GIA TRI DO
                ST_WAIT_ACK: begin
                    unique case (r_tick)
                        2'd0: r_sda_release   <= 1'b1;                    // tha SDA cho slave dieu khien
                        2'd1: r_scl_release   <= 1'b1;                    // SCL len - vung du lieu hop le bat dau
                        2'd2: begin
                            r_ack_bit         <= IO_I2C_SDA;                  // DOC gia tri ACK/NACK tai day (SCL van cao)
                            r_scl_release     <= 1'b0;
                        end
                        2'd3: begin
                            if (r_ack_bit) 
                                O_I2C_NACK_ERROR <= 1'b1; // ghi nhan loi neu la NACK
                            else if (r_byte_idx != 2'd2) 
                                r_byte_idx <= r_byte_idx + 1'b1;
                        end
                    endcase
                end

                ST_STOP: begin
                    unique case (r_tick)
                        2'd0: begin 
                            r_sda_release  <= 1'b0; 
                            r_scl_release  <= 1'b0; 
                        end
                        2'd1: begin 
                            r_scl_release  <= 1'b1; 
                        end
                        2'd2: begin 
                            r_sda_release  <= 1'b1; 
                        end          // THA (khong chu dong day len 1) -> STOP
                        2'd3: begin 
                            r_byte_idx     <= 2'd0; 
                        end
                    endcase
                end

                // Giong ST_STOP nhung dan toi ST_ERROR thay vi tiep tuc thanh ghi ke tiep
                ST_STOP_ERR: begin
                    unique case (r_tick)
                        2'd0: begin 
                            r_sda_release  <= 1'b0; 
                            r_scl_release  <= 1'b0; 
                        end
                        2'd1: begin 
                            r_scl_release  <= 1'b1; 
                        end
                        2'd2: begin 
                            r_sda_release  <= 1'b1; 
                        end
                        2'd3: ;
                    endcase
                end

                ST_NEXT_REG: begin
                    if (r_reg_idx != 8) 
                        r_reg_idx <= r_reg_idx + 1'b1;
                end

                ST_DONE: begin
                    O_CONFIG_DONE <= 1'b1;
                end

                ST_ERROR: begin
                    O_CONFIG_DONE <= 1'b0;   
                end
            endcase
        end
    end

endmodule: I2C_MASTER   

