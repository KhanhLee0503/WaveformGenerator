`timescale 1ns/1ps

module WAVE_GEN_TOP(
  input logic         I_CLK,
  input logic         I_RESET_N,

  input logic [2:0]   I_WAVE_SELECT,
  input logic         I_START,
  input logic         I_CHANGE_MODE,
  input logic         I_UP,
  input logic         I_DOWN,

  input logic         I_PHASE_SAMPLE_EN,
  input logic         I_PHASE_CLEAR,

  input logic         I_NOISE_INJECT_EN,

  output logic        O_PHASE_FREQ_RANGE_ERROR,
  output logic [23:0] O_WAVE_DATA
);

logic [31:0]  w_duty_cycle_th;
logic [31:0]  w_phase_ftw;
logic [15:0]  w_amplitude;

INPUT_CONTROL u_input_control(
  .I_CLK                   (I_CLK),
  .I_RESET_N               (I_RESET_N),
  .I_START                 (I_START),
  .I_CHANGE_MODE           (I_CHANGE_MODE),
  .I_UP                    (I_UP),
  .I_DOWN                  (I_DOWN),
  .O_DUTY_CYCLE_TH         (w_duty_cycle_th),
  .O_PHASE_FTW             (w_phase_ftw),
  .O_AMPLITUDE             (w_amplitude)
);

WAVE_GEN u_wave_gen(
  .I_CLK                   (I_CLK),
  .I_RESET_N               (I_RESET_N),
  .I_WAVE_SELECT           (I_WAVE_SELECT),
  .I_DUTY_CYCLE_TH         (w_duty_cycle_th),
  .I_PHASE_SAMPLE_EN       (I_PHASE_SAMPLE_EN),
  .I_PHASE_FTW             (w_phase_ftw),
  .I_PHASE_CLEAR           (I_PHASE_CLEAR),
  .I_AMPLITUDE             (w_amplitude),
  .I_NOISE_INJECT_EN       (I_NOISE_INJECT_EN),
  .O_PHASE_FREQ_RANGE_ERROR(O_PHASE_FREQ_RANGE_ERROR),
  .O_WAVE_DATA             (O_WAVE_DATA)
);

endmodule: WAVE_GEN_TOP
