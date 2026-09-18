`timescale 1ns/1ps

module I2S_MASTER(
  input logic 	     I_MCLK,
  input logic        I_RESET_N,
  input logic 	     I_START,
  input logic [23:0] I_WAVE_DATA,

  output logic 	     O_AUD_DACDAT,
  output logic 	     O_AUD_DACLRCLK,
  output logic       O_AUD_DACBCLK
);

typedef enum logic[2:0]{
  ST_IDLE,
  ST_LEFT,
  ST_RIGHT
} state_t;

state_t      r_current_state;
state_t      w_next_state;

logic        r_aud_dac_bclk;
logic        r_aud_dac_lrclk;

logic [31:0] r_wave_data;
logic [4:0]  r_frame_cnt;

logic [1:0]  r_start_sync;
logic        w_start_sync;

//I_START Synchronization
always_ff @(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N) 
    r_start_sync <= 2'b0; 
 else begin
    r_start_sync[0] <= I_START;
    r_start_sync[1] <= r_start_sync[0];
 end
end

FALLING_EDGE_DETECTOR u_start_detector(
  .I_CLK(I_MCLK),
  .I_RESET_N(I_RESET_N),
  .I_SIGNAL(r_start_sync[1]),
  .O_FALLING_EDGE(w_start_sync)
);

//Clock divider for MCLK
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_aud_dac_bclk <= 'b0;
  else 
    r_aud_dac_bclk <= ~r_aud_dac_bclk;
end

//Input Latch and Shift Registers
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N) begin
    r_wave_data  <= 'b0;
    O_AUD_DACDAT <= 'b0;
  end
  else if(((r_frame_cnt == 'd31) && (r_current_state == ST_RIGHT) && r_aud_dac_bclk) || w_start_sync)
    r_wave_data  <= {I_WAVE_DATA, 8'd0};
  else if (r_frame_cnt >= 'd1) begin
    if(((r_current_state == ST_LEFT) || (r_current_state == ST_RIGHT)) && r_aud_dac_bclk)
      O_AUD_DACDAT <= r_wave_data[32 - r_frame_cnt];
  end
end

//BCLK tick counter
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_frame_cnt <= 'b0;
  else if(r_current_state == ST_IDLE)
    r_frame_cnt <= 'b0;
  else if(r_aud_dac_bclk)
    r_frame_cnt <= r_frame_cnt + 'b1;
end

//I2S FSM Controller
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_current_state <= ST_IDLE;
  else if ((r_aud_dac_bclk) || w_start_sync)
    r_current_state <= w_next_state;
end

always_comb begin
  case(r_current_state)
    ST_IDLE: begin
      if(w_start_sync)
        w_next_state = ST_LEFT;
      else
        w_next_state = r_current_state;
    end

    ST_LEFT: begin
      if(r_frame_cnt == 'd31)
        w_next_state = ST_RIGHT;
      else
        w_next_state = r_current_state;
    end

    ST_RIGHT: begin
      if(r_frame_cnt == 'd31)
        w_next_state = ST_LEFT;
      else
        w_next_state = r_current_state;
    end
    default: w_next_state = ST_IDLE;
  endcase
end

//DAC_LRCLK Selector
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
	  r_aud_dac_lrclk <= 'b0;	
  else if(r_aud_dac_bclk) begin
    case(r_current_state)
      ST_IDLE: r_aud_dac_lrclk <= 'b0;	
      ST_LEFT: r_aud_dac_lrclk <= 'b0;	
      ST_RIGHT:r_aud_dac_lrclk <= 'b1;	
      default: r_aud_dac_lrclk <= 'b0;	
    endcase
  end
end

assign O_AUD_DACLRCLK = r_aud_dac_lrclk;
assign O_AUD_DACBCLK  = r_aud_dac_bclk;

endmodule: I2S_MASTER
