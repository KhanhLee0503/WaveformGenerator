`timescale 1ns/1ps

module PHASE_ACCUMULATOR_TB;

localparam int COUNTER_WD = 32;
localparam logic [COUNTER_WD-1:0] MIN_FTW = 32'h000D_A741;
localparam logic [COUNTER_WD-1:0] MAX_FTW = 32'h3555_5555;

logic                  I_CLK;
logic                  I_RESET_N;
logic                  I_PHASE_SAMPLE_EN;
logic [COUNTER_WD-1:0] I_PHASE_FTW;
logic                  I_PHASE_CLEAR;
logic [COUNTER_WD-1:0] O_PHASE_COUNTER;
logic                  O_PHASE_FREQ_RANGE_ERROR;
int                    error_count;

PHASE_ACCUMULATOR #(.PARA_COUNTER_WD(COUNTER_WD)) dut (
  .I_CLK                    (I_CLK),
  .I_RESET_N                (I_RESET_N),
  .I_PHASE_SAMPLE_EN        (I_PHASE_SAMPLE_EN),
  .I_PHASE_FTW              (I_PHASE_FTW),
  .I_PHASE_CLEAR            (I_PHASE_CLEAR),
  .O_PHASE_COUNTER          (O_PHASE_COUNTER),
  .O_PHASE_FREQ_RANGE_ERROR (O_PHASE_FREQ_RANGE_ERROR)
);

/* verilator lint_off BLKSEQ */
always #5 I_CLK = ~I_CLK;
/* verilator lint_on BLKSEQ */

task automatic check_counter(input logic [COUNTER_WD-1:0] expected,
                             input string test_name);
begin
  if (O_PHASE_COUNTER !== expected) begin
    $error("FAIL: %s, counter=0x%08h, expected=0x%08h",
           test_name, O_PHASE_COUNTER, expected);
    error_count++;
  end else
    $display("PASS: %s", test_name);
end
endtask

task automatic check_range_error(input logic expected,
                                 input string test_name);
begin
  #1;
  if (O_PHASE_FREQ_RANGE_ERROR !== expected) begin
    $error("FAIL: %s, range_error=%0b, expected=%0b",
           test_name, O_PHASE_FREQ_RANGE_ERROR, expected);
    error_count++;
  end else
    $display("PASS: %s", test_name);
end
endtask

task automatic apply_reset;
begin
  @(negedge I_CLK);
  I_RESET_N         = 1'b0;
  I_PHASE_SAMPLE_EN = 1'b0;
  I_PHASE_CLEAR     = 1'b0;
  #1;
  check_counter('0, "Asynchronous active-low reset");
  repeat (2) @(negedge I_CLK);
  I_RESET_N = 1'b1;
  @(posedge I_CLK);
  #1;
  check_counter('0, "Counter remains zero after reset release");
end
endtask

task automatic test_enable_and_hold;
  logic [COUNTER_WD-1:0] expected;
begin
  $display("\nTEST 1: Sample enable and hold");
  apply_reset();
  expected = '0;
  @(negedge I_CLK);
  I_PHASE_FTW       = MIN_FTW;
  I_PHASE_SAMPLE_EN = 1'b1;
  repeat (4) begin
    @(posedge I_CLK);
    expected = expected + MIN_FTW;
    #1;
    check_counter(expected, "Counter accumulates FTW when enabled");
  end
  @(negedge I_CLK);
  I_PHASE_SAMPLE_EN = 1'b0;
  repeat (3) begin
    @(posedge I_CLK);
    #1;
    check_counter(expected, "Counter holds when sample enable is low");
  end
end
endtask

task automatic test_clear_priority;
begin
  $display("\nTEST 2: Synchronous clear and priority");
  apply_reset();
  @(negedge I_CLK);
  I_PHASE_FTW       = 32'h0123_4567;
  I_PHASE_SAMPLE_EN = 1'b1;
  repeat (2) @(posedge I_CLK);
  @(negedge I_CLK);
  I_PHASE_CLEAR = 1'b1;
  @(posedge I_CLK);
  #1;
  check_counter('0, "Clear has priority over accumulation");
  @(negedge I_CLK);
  I_PHASE_CLEAR = 1'b0;
  @(posedge I_CLK);
  #1;
  check_counter(32'h0123_4567, "Accumulation resumes after clear");
end
endtask

task automatic test_counter_wrap;
  logic [COUNTER_WD-1:0] expected;
  int index;
begin
  $display("\nTEST 3: Natural modulo wrap-around");
  apply_reset();
  expected = '0;
  @(negedge I_CLK);
  I_PHASE_FTW       = MAX_FTW;
  I_PHASE_SAMPLE_EN = 1'b1;
  for (index = 0; index < 6; index++) begin
    @(posedge I_CLK);
    expected = expected + MAX_FTW;
    #1;
    check_counter(expected, "Counter wraps at configured width");
  end
end
endtask

task automatic test_ftw_range;
begin
  $display("\nTEST 4: FTW range checking");
  I_PHASE_FTW = MIN_FTW - 1'b1;
  check_range_error(1'b1, "FTW below minimum is rejected");
  I_PHASE_FTW = MIN_FTW;
  check_range_error(1'b0, "Minimum FTW is accepted");
  I_PHASE_FTW = MIN_FTW + 1'b1;
  check_range_error(1'b0, "FTW inside range is accepted");
  I_PHASE_FTW = MAX_FTW - 1'b1;
  check_range_error(1'b0, "FTW below maximum is accepted");
  I_PHASE_FTW = MAX_FTW;
  check_range_error(1'b0, "Maximum FTW is accepted");
  I_PHASE_FTW = MAX_FTW + 1'b1;
  check_range_error(1'b1, "FTW above maximum is rejected");
end
endtask

initial begin
  I_CLK             = 1'b0;
  I_RESET_N         = 1'b0;
  I_PHASE_SAMPLE_EN = 1'b0;
  I_PHASE_FTW       = MIN_FTW;
  I_PHASE_CLEAR     = 1'b0;
  error_count       = 0;
  $dumpfile("PHASE_ACCUMULATOR_TB.vcd");
  $dumpvars(0, PHASE_ACCUMULATOR_TB);
  test_enable_and_hold();
  test_clear_priority();
  test_counter_wrap();
  test_ftw_range();
  if (error_count == 0)
    $display("\nALL TESTS PASSED");
  else
    $fatal(1, "\nTEST FAILED: %0d error(s)", error_count);
  $finish;
end

endmodule: PHASE_ACCUMULATOR_TB
