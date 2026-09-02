`timescale 1ns/1ps
module WAVE_GEN_TOP(
  input logic         I_CLK,
  input logic         I_RESET_N,

  input logic [1:0]   I_WAVE_SELECT,

  input logic [31:0]  I_DUTY_CYCLE_TH,

  input logic         I_PHASE_SAMPLE_EN,
  input logic [31:0]  I_PHASE_FTW,
  input logic         I_PHASE_CLEAR,

  input logic [23:0]  I_AMPLITUDE,

  input logic         I_NOISE_INJECT_EN,

  output logic        O_PHASE_FREQ_RANGE_ERROR,
  output logic [23:0] O_WAVE_DATA
);

logic [31:0] w_phase_counter;
logic [23:0] w_sine_data;
logic [23:0] w_square_data;
logic [23:0] w_triangle_data;
logic [23:0] w_sawtooth_data;
logic [23:0] w_prbs_data;
logic [23:0] w_wave_data;

logic        r_phase_sample_en;
logic [31:0] r_phase_ftw;
logic        r_phase_clear;
logic [31:0] r_duty_cycle_th;
logic [23:0] r_amplitude;

SINE_GENERATOR u_sine_gen(
  .I_CLK                   (I_CLK),
  .I_RESET_N               (I_RESET_N),
  .I_PHASE_COUNTER         (w_phase_counter[31:18]),
  .O_SINE_DATA             (w_sine_data)
);

SQUARE_GENERATOR u_square_gen(
  .I_CLK                   (I_CLK),
  .I_RESET_N               (I_RESET_N),
  .I_PHASE_COUNTER         (w_phase_counter),
  .I_DUTY_CYCLE_TH         (r_duty_cycle_th),
  .O_SQUARE_DATA           (w_square_data)
);

TRIANGLE_GENERATOR u_triangle_gen(
  .I_PHASE_COUNTER         (w_phase_counter),
  .O_TRIANGLE_DATA         (w_triangle_data)
);

SAW_TOOTH_GENERATOR u_saw_tooth_gen(
  .I_PHASE_COUNTER         (w_phase_counter[31:8]),
  .O_SAW_DATA              (w_sawtooth_data)
);

PHASE_ACCUMULATOR u_phase_accumulator(
  .I_CLK                   (I_CLK)  ,
  .I_RESET_N               (I_RESET_N),
  .I_PHASE_SAMPLE_EN       (r_phase_sample_en),
  .I_PHASE_FTW             (r_phase_ftw),
  .I_PHASE_CLEAR           (r_phase_clear),
  .O_PHASE_COUNTER         (w_phase_counter),
  .O_PHASE_FREQ_RANGE_ERROR(O_PHASE_FREQ_RANGE_ERROR)
);

PRBS_GENERATOR u_prbs_gen(
  .I_CLK                    (I_CLK),
  .I_RESET_N                (I_RESET_N),
  .I_PHASE_SAMPLE_EN        (r_phase_sample_en),
  .O_PRBS_DATA              (w_prbs_data)
);

always_comb begin
  case (I_WAVE_SELECT)
    2'b00: w_wave_data = w_sine_data;
    2'b01: w_wave_data = w_square_data;
    2'b10: w_wave_data = w_triangle_data;
    2'b11: w_wave_data = w_sawtooth_data;
    default: w_wave_data = 24'h000000;
  endcase
end

assign O_WAVE_DATA = (I_NOISE_INJECT_EN) ? ((w_wave_data + w_prbs_data) * r_amplitude) >> 15 : (w_wave_data * r_amplitude) >> 15;


always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N) begin
    r_phase_sample_en <= 'b0;
    r_phase_ftw       <= 'b0;
    r_phase_clear     <= 'b0;
    r_duty_cycle_th   <= 'b0;
    r_amplitude       <= 'b0;
  end
  else begin
    r_phase_sample_en <= I_PHASE_SAMPLE_EN;
    r_phase_ftw       <= I_PHASE_FTW;
    r_phase_clear     <= I_PHASE_CLEAR;
    r_duty_cycle_th   <= I_DUTY_CYCLE_TH;
    r_amplitude       <= I_AMPLITUDE;
  end
end

endmodule: WAVE_GEN_TOP