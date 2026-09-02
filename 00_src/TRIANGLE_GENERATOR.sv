`timescale 1ns/1ps
module TRIANGLE_GENERATOR(
  input logic [31:0]  I_PHASE_COUNTER,
  output logic [23:0] O_TRIANGLE_DATA
);

logic [23:0] w_phase_counter_negate;
logic [23:0] w_phase_counter;



assign w_phase_counter_negate = ~I_PHASE_COUNTER[31:8] + 1;
assign w_phase_counter        = (I_PHASE_COUNTER[31]) ? w_phase_counter_negate : I_PHASE_COUNTER[31:8];
assign O_TRIANGLE_DATA        = (w_phase_counter << 1) - 24'h7F_FFFF;

endmodule: TRIANGLE_GENERATOR
