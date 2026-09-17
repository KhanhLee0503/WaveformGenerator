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
}state_t;

logic r_current_state;
logic w_next_state;

logic [1:0] r_bclk_cnt;
logic       r_aud_dac_bclk;
logic       r_aud_dac_lrclk;

logic [31:0] r_wave_data;
logic [6:0] r_frame_cnt;

logic [31:0] r_data_shifter;

//Clock divider for MCLK
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_bclk_cnt     <= 'b0;
  else if (r_bclk_cnt == 'd2) begin
    r_aud_dac_bclk  <= ~r_aud_dac_bclk;
    r_bclk_cnt     <= 'b0;
  end
  else 
    r_bclk_cnt     <= r_bclk_cnt + 'b1;
end

//Input Latch and Shift Registers
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_wave_data <= 'b0;
  else if((r_frame_cnt == 'd127) || I_START)
    r_wave_data <= {8'd0,I_WAVE_DATA};
  else if ((!r_aud_dac_bclk) && (r_current_state == ST_LEFT))

end

always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_frame_cnt <= 'b0;
  else if(r_current_state == ST_IDLE)
    r_frame_cnt <= 'b0;
  else 
    r_frame_cnt <= r_frame_cnt + 'b1;
end

//I2S FSM Controller
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

always_comb begin
  case(r_current_state)
	ST_IDLE: begin
		if(I_START)
			w_next_state = ST_LEFT;
		else
			w_next_state = r_current_state;
	end

	ST_LEFT: begin
		if(r_frame_cnt == 'd63)
			w_next_state = ST_RIGHT;
		else
			w_next_state = r_current_state;
	end

	ST_RIGHT: begin
		if(r_frame_cnt == 'd127)
			w_next_state = ST_LEFT;
		else
			w_next_state = r_current_state;
	end
	default: w_next_state = r_current_state;
endcase
end

  
always_ff@(posedge I_MCLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
	r_aud_dac_lrclk <= 'b0;	
  else if(!r_aud_dac_bclk) begin
    case(r_current_state)
      ST_IDLE: r_aud_dac_lrclk <= 'b0;	
      ST_LEFT: r_aud_dac_lrclk <= 'b0;	
      ST_RIGHT:r_aud_dac_lrclk <= 'b1;	
      default: r_aud_dac_lrclk <= 'b0;	
    endcase
  end
end
   
endmodule: I2S_MASTER
