`timescale 1ns/1ps

module SINE_PHASE_MAPPER(
  input logic [1:0]   I_PHASE_QUADRANT,
  input logic [11:0]  I_PHASE_COUNTER,

  output logic [11:0] O_SINE_ADDR,
  output logic        O_NEGATIVE
);  

always_comb begin
  case(I_PHASE_QUADRANT)
    2'b00: O_SINE_ADDR   = I_PHASE_COUNTER; // 0 degree
    2'b01: O_SINE_ADDR   = 12'd4095 - I_PHASE_COUNTER; // 90 degree
    2'b10: O_SINE_ADDR   = I_PHASE_COUNTER; // 180 degree
    2'b11: O_SINE_ADDR   = 12'd4095 - I_PHASE_COUNTER; // 270 degree
    default: O_SINE_ADDR = 12'h000;
  endcase
end

always_comb begin
  case(I_PHASE_QUADRANT)
    2'b00: O_NEGATIVE   = 1'b0;
    2'b01: O_NEGATIVE   = 1'b0;
    2'b10: O_NEGATIVE   = 1'b1;
    2'b11: O_NEGATIVE   = 1'b1;
    default: O_NEGATIVE = 1'b0;
  endcase
end

endmodule: SINE_PHASE_MAPPER
