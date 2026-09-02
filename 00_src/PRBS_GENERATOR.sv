`timescale 1ns/1ps

module PRBS_GENERATOR(
  input logic         I_CLK,
  input logic         I_RESET_N,

  input logic         I_PHASE_SAMPLE_EN,

  output logic [23:0] O_PRBS_DATA
);

logic [23:0] r_prbs_data;
logic        w_prbs_feedback;

assign w_prbs_feedback = r_prbs_data[23] ^ r_prbs_data[22] ^ r_prbs_data[21] ^ r_prbs_data[16];

always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_prbs_data <= 24'hFF_FFFF;
  else if(I_PHASE_SAMPLE_EN)
    r_prbs_data <= {r_prbs_data[22:0], w_prbs_feedback};
end

assign O_PRBS_DATA = r_prbs_data; 

endmodule: PRBS_GENERATOR
