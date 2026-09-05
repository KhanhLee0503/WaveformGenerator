`timescale 1ns/1ps

module ECG_GENERATOR(
  input logic                        I_CLK,
  input logic                        I_RESET_N,
  input logic [11:0]                 I_ADDR,

  output logic [23:0]                O_SAMPLE
);

logic [23:0] r_ecg_data [0:4095];

initial begin
  $readmemh("C:/SystemVerilog/Waveform_Generator/02_sim/ECG_LUT.mem", r_ecg_data);
end

always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    O_SAMPLE <= 'h0;
  else
    O_SAMPLE <= r_ecg_data[I_ADDR];
end

endmodule : ECG_GENERATOR
