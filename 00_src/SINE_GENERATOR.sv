`timescale 1ns/1ps
module SINE_GENERATOR(
  input logic         I_CLK,
  input logic         I_RESET_N,

  input logic [13:0]  I_PHASE_COUNTER,

  output logic [23:0] O_SINE_DATA
);

logic [11:0] w_sine_addr;
logic [23:0] w_sine_data;
logic        w_negate;
logic        r_negate;

always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_negate <= 1'b0;
  else
    r_negate <= w_negate;
end

SINE_PHASE_MAPPER u_phase_mapper(
  .I_PHASE_QUADRANT(I_PHASE_COUNTER[13:12]),
  .I_PHASE_COUNTER (I_PHASE_COUNTER[11:0]),
  .O_SINE_ADDR     (w_sine_addr),
  .O_NEGATIVE      (w_negate)
);  

SINE_LUT u_sine_lut(
  .I_CLK           (I_CLK),
  .I_RESET_N       (I_RESET_N),
  .I_ADDR          (w_sine_addr),
  .O_SINE_DATA     (w_sine_data)
);

assign O_SINE_DATA = r_negate ? (~w_sine_data + 1) : w_sine_data;

endmodule: SINE_GENERATOR
