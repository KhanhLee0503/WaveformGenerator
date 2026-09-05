`timescale 1ns/1ps

module NEGATIVE_MULTIPLIER(
  input logic [23:0]  I_INPUT,
  input logic [15:0]  I_MULTIPLIER,
  output logic [23:0] O_OUTPUT
);

logic [23:0] w_input_negate; 
logic [39:0] w_multiplier; 
logic [39:0] w_multiplier_negate; 

assign w_input_negate      = ~I_INPUT + 24'd1;
assign w_multiplier        = (w_input_negate * I_MULTIPLIER) >> 15;
assign w_multiplier_negate = ~w_multiplier + 40'd1;
assign O_OUTPUT            = w_multiplier_negate[23:0];

endmodule : NEGATIVE_MULTIPLIER
