`timescale 1ns/1ps

module PHASE_ACCUMULATOR_TB;

localparam ST_INITIAL       = 4'd0;
localparam ST_WAVE_TYPE     = 4'd1;
localparam ST_UP_SINE_1     = 4'd2;
localparam ST_DOWN_SINE_1   = 4'd3;
localparam ST_UP_SINE_2     = 4'd4;
localparam ST_UP_SQUARE     = 4'd6;
localparam ST_UP_TRIANGLE   = 4'd7;
localparam ST_DOWN_TRIANGLE = 4'd8;
localparam ST_UP_SAW_TOOTH  = 4'd9;

logic        I_CLK;
logic        I_RESET_N;
logic [1:0]  I_WAVE_TYPE;
logic        I_START;
logic [15:0] I_FREQ_DELTA;

logic [14:0] O_COUNTER;
logic        O_OVERFLOW;
logic        O_UNDERFLOW;
logic [3:0]  O_STATE;

integer error_count;

PHASE_ACCUMULATOR dut (
  .I_CLK        (I_CLK),
  .I_RESET_N    (I_RESET_N),
  .I_WAVE_TYPE  (I_WAVE_TYPE),
  .I_START      (I_START),
  .I_FREQ_DELTA (I_FREQ_DELTA),
  .O_COUNTER    (O_COUNTER),
  .O_OVERFLOW   (O_OVERFLOW),
  .O_UNDERFLOW  (O_UNDERFLOW),
  .O_STATE      (O_STATE)
);

always #5 I_CLK = ~I_CLK;

task automatic check_state(
  input logic [3:0] expected,
  input string      test_name
);
begin
  if (O_STATE !== expected) begin
    $error("FAIL: %s, state=%0d, expected=%0d", test_name,
           O_STATE, expected);
    error_count = error_count + 1;
  end
  else
    $display("PASS: %s", test_name);
end
endtask

task automatic check_counter(
  input logic [14:0] expected,
  input string       test_name
);
begin
  if (O_COUNTER !== expected) begin
    $error("FAIL: %s, counter=%0d, expected=%0d", test_name,
           O_COUNTER, expected);
    error_count = error_count + 1;
  end
  else
    $display("PASS: %s", test_name);
end
endtask

task automatic apply_reset;
begin
  @(posedge I_CLK);
  I_RESET_N = 1'b0;
  I_START   = 1'b0;
  repeat (2) @(posedge I_CLK);

  @(posedge I_CLK);
  I_RESET_N = 1'b1;
  @(posedge I_CLK);
  #1;
end
endtask

task automatic select_wave(input logic [1:0] wave_type);
begin
  @(posedge I_CLK);
  I_WAVE_TYPE = wave_type;
  I_START     = 1'b1;

  @(posedge I_CLK);
  #1;

  @(posedge I_CLK);
  I_START = 1'b0;
  @(posedge I_CLK);
  #1;
end
endtask

task automatic test_reset;
begin
  $display("\nTEST 1: Reset");
  apply_reset();
  check_state(ST_INITIAL, "State after reset");
  check_counter(15'd0, "Counter after reset");
 
  $display("PASS: Underflow is asserted at zero");
end
endtask

task automatic test_wave_selection;
begin
  $display("\nTEST 2: Wave type selection");

  apply_reset();
  select_wave(2'b00);
  check_state(ST_UP_SINE_1, "Select sine");

  apply_reset();
  select_wave(2'b01);
  check_state(ST_UP_SQUARE, "Select square");

  apply_reset();
  select_wave(2'b10);
  check_state(ST_UP_TRIANGLE, "Select triangle");

  apply_reset();
  select_wave(2'b11);
  check_state(ST_UP_SAW_TOOTH, "Select saw-tooth");
end
endtask

task automatic test_sine;
  integer index;
begin
  $display("\nTEST 3: Sine counter and state transition");
  apply_reset();
  select_wave(2'b00);

  for (index = 1; index <= 3; index = index + 1) begin
    @(posedge I_CLK);
    #1;
    check_counter(index * 5000, "Sine counter counts up");
  end

  if (O_OVERFLOW !== 1'b1) begin
    $error("FAIL: Overflow must be asserted early at counter=15000");
    error_count = error_count + 1;
  end
  else
    $display("PASS: Overflow is asserted early at counter=15000");

  @(posedge I_CLK);
  #1;
  check_state(ST_DOWN_SINE_1, "Sine changes from up to down");
  check_counter(15'd20000, "Sine reaches the real maximum");

  repeat (100) @(posedge I_CLK);
  #1;
end
endtask

task automatic test_triangle;
begin
  $display("\nTEST 4: Triangle changes direction");
  apply_reset();
  select_wave(2'b10);

  repeat (3) @(posedge I_CLK);
  #1;
  check_counter(15'd15000, "Triangle reaches early overflow point");

  if (O_OVERFLOW !== 1'b1) begin
    $error("FAIL: Triangle overflow must be asserted at counter=15000");
    error_count = error_count + 1;
  end
  else
    $display("PASS: Triangle overflow is asserted early");

  @(posedge I_CLK);
  #1;
  check_state(ST_DOWN_TRIANGLE, "Triangle changes to down state");
  check_counter(15'd20000, "Triangle reaches the real maximum");

  repeat (100) @(posedge I_CLK);
  #1;
 end
endtask

task automatic test_change_square_to_saw;
begin
  $display("\nTEST 5: Change square to saw-tooth while counting");
  apply_reset();
  select_wave(2'b01);
  check_state(ST_UP_SQUARE, "Square is active");

  @(posedge I_CLK);
  #1;

  @(posedge I_CLK);
  I_WAVE_TYPE = 2'b11;

  @(posedge I_CLK);
  #1;

  @(posedge I_CLK);
  #1;

  @(posedge I_CLK);
  #1;

  repeat (100) @(posedge I_CLK);
  #1;
end
endtask

task automatic test_change_triangle_to_sine;
begin
  $display("\nTEST 6: Change triangle to sine while counting down");
  apply_reset();
  select_wave(2'b10);

  repeat (20) @(posedge I_CLK);
  @(posedge I_CLK);
  #1;

  @(posedge I_CLK);
  #1;
  
  @(posedge I_CLK);
  I_WAVE_TYPE = 2'b00;

  repeat (100) @(posedge I_CLK);
  #1;

end
endtask

initial begin
  I_CLK        = 1'b0;
  I_RESET_N    = 1'b0;
  I_WAVE_TYPE  = 2'b00;
  I_START      = 1'b0;
  I_FREQ_DELTA = 16'd5000;
  error_count  = 0;

  $dumpfile("PHASE_ACCUMULATOR_TB.vcd");
  $dumpvars(0, PHASE_ACCUMULATOR_TB);

  test_reset();
 // test_wave_selection();
 // test_sine();
 // test_triangle();
//  test_change_square_to_saw();
  test_change_triangle_to_sine();

  if (error_count == 0)
    $display("\nALL TESTS PASSED");
  else
    $display("\nTEST FAILED: %0d error(s)", error_count);

  $finish;
end

endmodule
