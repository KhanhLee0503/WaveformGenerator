`timescale 1ns/1ps

module SAW_TOOTH_GENERATOR(
  input  logic [23:0] I_PHASE_COUNTER,
  output logic [23:0] O_SAW_DATA
);

assign O_SAW_DATA = {~I_PHASE_COUNTER[23], I_PHASE_COUNTER[22:0]};

endmodule : SAW_TOOTH_GENERATOR
