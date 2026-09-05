`timescale 1ns/1ps

module FALLING_EDGE_DETECTOR(
  input logic  I_CLK,
  input logic  I_RESET_N,
  input logic  I_SIGNAL,
  output logic O_FALLING_EDGE
);

logic r_signal_dly;

always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_signal_dly <= 1'b0;
  else
    r_signal_dly <= I_SIGNAL;
end

assign O_FALLING_EDGE = r_signal_dly & ~I_SIGNAL;

endmodule: FALLING_EDGE_DETECTOR
