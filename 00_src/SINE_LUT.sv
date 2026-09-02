`timescale 1ns/1ps
module SINE_LUT(
  input logic         I_CLK,
  input logic         I_RESET_N,
  input logic [11:0]  I_ADDR,

  output logic [23:0] O_SINE_DATA
);

logic [23:0] r_sine_sample [0:4095];

initial begin
  $readmemh("SINE_LUT.mem", r_sine_sample);
end

always_ff@(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N) 
    O_SINE_DATA <= 'h0;
  else 
    O_SINE_DATA <= r_sine_sample[I_ADDR];
end

endmodule: SINE_LUT
