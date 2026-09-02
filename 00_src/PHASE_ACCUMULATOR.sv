`timescale 1ns/1ps

module PHASE_ACCUMULATOR
#(
  PARA_COUNTER_WD = 32
)
(
  input logic                        I_CLK,
  input logic                        I_RESET_N,

  input logic                        I_PHASE_SAMPLE_EN,
  input logic [PARA_COUNTER_WD-1:0]  I_PHASE_FTW,
  input logic                        I_PHASE_CLEAR,

  output logic [PARA_COUNTER_WD-1:0] O_PHASE_COUNTER,
  output logic                       O_PHASE_FREQ_RANGE_ERROR
);

logic [PARA_COUNTER_WD-1:0] r_phase_counter;

assign O_PHASE_FREQ_RANGE_ERROR = (I_PHASE_FTW < 32'h000DA741) || (I_PHASE_FTW > 32'h35555555);

//=============================================================
//                      PHASE COUNTER
//=============================================================

always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_phase_counter <= 'h0;
  else if (I_PHASE_CLEAR)
    r_phase_counter <= 'h0;
  else if (I_PHASE_SAMPLE_EN) 
    r_phase_counter <= r_phase_counter + I_PHASE_FTW;
end

assign O_PHASE_COUNTER = r_phase_counter;

endmodule: PHASE_ACCUMULATOR
