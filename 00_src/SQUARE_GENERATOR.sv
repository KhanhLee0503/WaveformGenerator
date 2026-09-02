`timescale 1ns/1ps
module SQUARE_GENERATOR(
  input logic         I_CLK,
  input logic         I_RESET_N,

  input logic [31:0]  I_PHASE_COUNTER,
  input logic [31:0]  I_DUTY_CYCLE_TH,

  output logic [23:0] O_SQUARE_DATA
);

assign O_SQUARE_DATA = (I_PHASE_COUNTER <= I_DUTY_CYCLE_TH) ? 24'h7F_FFFF : 24'h80_0001;

endmodule: SQUARE_GENERATOR