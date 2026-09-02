`timescale 1ns/1ps

module TRIANGLE_GENERATOR(
  input logic [31:0]  I_PHASE_COUNTER,
  output logic [23:0] O_TRIANGLE_DATA
);

logic [22:0] w_phase_counter;
logic [24:0] w_triangle_data_temp;

// Negate the phase counter if the MSB is set, otherwise use the phase counter as is
assign w_phase_counter        = (I_PHASE_COUNTER[31]) ? ~I_PHASE_COUNTER[30:8] : I_PHASE_COUNTER[30:8];

// Calculate the triangle wave data by shifting the phase counter left by 1 and subtracting 8388607 (which is 2^23 - 1)
assign w_triangle_data_temp   = {1'b0, w_phase_counter, 1'b0} - 25'd8388607;
assign O_TRIANGLE_DATA        = w_triangle_data_temp[23:0];

endmodule: TRIANGLE_GENERATOR
