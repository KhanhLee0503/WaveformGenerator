`timescale 1ns/1ps

module PHASE_ACCUMULATOR
#(
  PARA_COUNTER_WD = 15
)
(
  input logic                        I_CLK,
  input logic                        I_RESET_N,

  input logic [1:0]                  I_WAVE_TYPE,
  input logic                        I_START,
  input logic [15:0]                 I_FREQ_DELTA,

  output logic [PARA_COUNTER_WD-1:0] O_COUNTER,
  output logic                       O_OVERFLOW,
  output logic                       O_UNDERFLOW,
  output logic [3:0]                 O_STATE
);

localparam RESET_NUMBER = 15'h0;

typedef enum logic [3:0]{
  ST_INITIAL,       
  ST_WAVE_TYPE,     
  ST_UP_SINE_1,     
  ST_DOWN_SINE_1,   
  ST_UP_SINE_2,     
  ST_DOWN_SINE_2,   
  ST_UP_SQUARE, 
  ST_SQUARE_RESET,    
  ST_UP_TRIANGLE,   
  ST_DOWN_TRIANGLE, 
  ST_UP_SAW_TOOTH,
  ST_SAW_TOOTH_RESET
} state;

logic [PARA_COUNTER_WD-1:0] r_phase_counter;
logic                       w_phase_clear;
logic                       w_phase_up;
logic                       w_phase_down;
logic                       w_phase_overflow;
logic                       w_phase_underflow;

state                       r_current_state;
state                       r_next_state;

//=============================================================
//                      PHASE COUNTER
//=============================================================

always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_phase_counter <= RESET_NUMBER;
  else if(w_phase_clear)
    r_phase_counter <= RESET_NUMBER;
  else begin 
  case({w_phase_down, w_phase_up})
    2'b00: r_phase_counter <= r_phase_counter;
    2'b01: r_phase_counter <= r_phase_counter + I_FREQ_DELTA;
    2'b10: r_phase_counter <= r_phase_counter - I_FREQ_DELTA;
    2'b11: r_phase_counter <= r_phase_counter;
  default: r_phase_counter <= r_phase_counter;
  endcase
  end
end

assign w_phase_overflow  = (r_phase_counter >= (15'h4E20 - I_FREQ_DELTA));
assign w_phase_underflow = (r_phase_counter <= (RESET_NUMBER + I_FREQ_DELTA));

//=============================================================
//                   PHASE FSM CONTROLLER
//=============================================================
always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_current_state <= ST_INITIAL;
  else  
    r_current_state <= r_next_state;
end

always_comb begin 
  case(r_current_state)
    ST_INITIAL: begin
                 if(I_START)
                  r_next_state = ST_WAVE_TYPE;
                 else
                  r_next_state = r_current_state;
    end

    ST_WAVE_TYPE: begin
                  if(I_WAVE_TYPE == 2'b00)
                    r_next_state = ST_UP_SINE_1;
                  else if(I_WAVE_TYPE == 2'b01)
                    r_next_state = ST_UP_SQUARE;
                  else if(I_WAVE_TYPE == 2'b10)
                    r_next_state = ST_UP_TRIANGLE;
                  else if(I_WAVE_TYPE == 2'b11)
                    r_next_state = ST_UP_SAW_TOOTH;
                  else 
                    r_next_state = r_current_state;
    end

    ST_UP_SINE_1: begin
                  if(w_phase_overflow)
                    r_next_state = ST_DOWN_SINE_1;
                  else
                    r_next_state = r_current_state;
    end

    ST_DOWN_SINE_1: begin
                  if(w_phase_underflow)
                    r_next_state = ST_UP_SINE_2;
                  else
                    r_next_state = r_current_state;
    end

    ST_UP_SINE_2: begin
                  if(w_phase_overflow)
                    r_next_state = ST_DOWN_SINE_2;
                  else
                    r_next_state = r_current_state;
    end

    ST_DOWN_SINE_2: begin
                  if((w_phase_underflow) && (I_WAVE_TYPE == 2'b00))
                    r_next_state = ST_UP_SINE_1;
                  else if((w_phase_underflow) && (I_WAVE_TYPE != 2'b00))
                    r_next_state = ST_WAVE_TYPE;
                  else
                    r_next_state = r_current_state;

    end

    ST_UP_SQUARE: begin
                  if(w_phase_overflow)
                    r_next_state = ST_SQUARE_RESET;
                  else
                    r_next_state = r_current_state;

    end

    ST_SQUARE_RESET: begin
                  if(I_WAVE_TYPE != 2'b01)
                    r_next_state = ST_WAVE_TYPE;
                  else
                    r_next_state = ST_UP_SQUARE;
    end

    ST_UP_TRIANGLE:begin
                  if(w_phase_overflow)
                    r_next_state = ST_DOWN_TRIANGLE;
                  else
                    r_next_state = r_current_state;

    end

    ST_DOWN_TRIANGLE:begin
                  if((w_phase_underflow) && (I_WAVE_TYPE == 2'b10))
                    r_next_state = ST_UP_TRIANGLE;
                  else if((w_phase_underflow) && (I_WAVE_TYPE != 2'b10))
                    r_next_state = ST_WAVE_TYPE;
                  else
                    r_next_state = r_current_state;

    end
  
    ST_UP_SAW_TOOTH: begin
                  if(w_phase_overflow)
                    r_next_state = ST_SAW_TOOTH_RESET;
                  else
                    r_next_state = r_current_state;

    end
    ST_SAW_TOOTH_RESET: begin
                  if(I_WAVE_TYPE != 2'b11)
                    r_next_state = ST_WAVE_TYPE;
                  else
                    r_next_state = ST_UP_SAW_TOOTH;
    end
  default: r_next_state = r_current_state;
  endcase
end

always_comb begin
  case(r_current_state)
    ST_INITIAL: begin
                  w_phase_clear = 1'b1;
                  w_phase_up    = 1'b0;
                  w_phase_down  = 1'b0;
    end

    ST_WAVE_TYPE: begin
                  w_phase_clear = 1'b1;
                  w_phase_up    = 1'b0;
                  w_phase_down  = 1'b0;
    end

    ST_UP_SINE_1, ST_UP_SINE_2, ST_UP_SQUARE, ST_UP_TRIANGLE, ST_UP_SAW_TOOTH: begin
                  w_phase_clear = 1'b0;
                  w_phase_up    = 1'b1;
                  w_phase_down  = 1'b0;
    end

    ST_DOWN_SINE_1, ST_DOWN_SINE_2, ST_DOWN_TRIANGLE: begin
                  w_phase_clear = 1'b0;
                  w_phase_up    = 1'b0;
                  w_phase_down  = 1'b1;
    end
    ST_SQUARE_RESET, ST_SAW_TOOTH_RESET: begin
                  w_phase_clear = 1'b1;
                  w_phase_up    = 1'b0;
                  w_phase_down  = 1'b0;
    end
    default: begin
                  w_phase_clear = 1'b1;
                  w_phase_up    = 1'b0;
                  w_phase_down  = 1'b0;
    end
  endcase
end

assign O_COUNTER     = r_phase_counter;
assign O_OVERFLOW    = w_phase_overflow;
assign O_UNDERFLOW   = w_phase_underflow;
assign O_STATE       = r_current_state;

endmodule: PHASE_ACCUMULATOR
