`timescale 1ns/1ps 

module INPUT_CONTROL(
  input logic          I_CLK,
  input logic          I_RESET_N,

  input logic          I_START,
  input logic          I_CHANGE_MODE,  
  input logic          I_UP,  
  input logic          I_DOWN,  

  output logic [31:0]  O_DUTY_CYCLE_TH,
  output logic [31:0]  O_PHASE_FTW,
  output logic [15:0]  O_AMPLITUDE
);

//Control parameters for the duty cycle threshold
localparam DUTY_CYCLE_TH_MIN  = 32'h3333_3333; //20% duty cycle
localparam DUTY_CYCLE_TH_MAX  = 32'hCCCC_CCCC; //80% duty cycle
localparam DUTY_CYCLE_TH_STEP = 32'h0CCC_CCCD; //Increase 5% duty cycle per step

//Control parameters for the phase frequency tracking word
localparam PHASE_FTW_MIN      = 32'h000D_A741; //20Hz at 96kHz sample clock frequency
localparam PHASE_FTW_MAX      = 32'h3555_5555; //20kHz at 96kHz sample clock frequency
localparam PHASE_FTW_STEP     = 32'h0044_4444; //Increase 100Hz frequency per step 

//Control parameters for the amplitude scaler
localparam AMPLITUDE_MIN      = 16'h0;
localparam AMPLITUDE_MAX      = 16'h8000;
localparam AMPLITUDE_STEP     = 16'h03E8;      //Increase 1000 per step

logic [31:0] r_duty_cycle_th;
logic [31:0] r_phase_ftw;
logic [15:0] r_amplitude;

logic [3:0] r_async_1;
logic [3:0] r_async_2;
logic r_sync_start;
logic r_sync_change_mode;
logic r_sync_up;
logic r_sync_down;

typedef enum logic [1:0] {
  ST_IDLE,
  ST_FREQ,
  ST_DUTY_CYCLE,
  ST_AMPLITUDE
} state_t;

state_t r_current_state, r_next_state; 

always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= r_next_state;
end

always_comb begin
  case(r_current_state)
    ST_IDLE: begin
      if(r_sync_start)
        r_next_state = ST_FREQ;
      else
        r_next_state = r_current_state;
    end
    ST_FREQ: begin
      if(r_sync_change_mode)
        r_next_state = ST_DUTY_CYCLE;
      else
        r_next_state = r_current_state;
    end
    ST_DUTY_CYCLE: begin
      if(r_sync_change_mode)
        r_next_state = ST_AMPLITUDE;
      else
        r_next_state = r_current_state;
    end
    ST_AMPLITUDE: begin
      if(r_sync_change_mode)
        r_next_state = ST_FREQ;
      else
        r_next_state = r_current_state;
    end
  default: r_next_state = ST_IDLE;
  endcase
end

//===============================================================================================
// Capture and synchronize the input signals (CHANGE_MODE, UP, DOWN) to the clock domain of I_CLK
//=============================================================================================== 

always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N) begin
    r_async_1 <= 'b0;
    r_async_2 <= 'b0;
  end
  else begin
    r_async_1 <= {I_START, I_CHANGE_MODE, I_UP, I_DOWN};
    r_async_2 <= r_async_1;
  end
end

FALLING_EDGE_DETECTOR u_detect_start(
  .I_CLK         (I_CLK),
  .I_RESET_N     (I_RESET_N),
  .I_SIGNAL      (r_async_2[3]),
  .O_FALLING_EDGE(r_sync_start)
);

FALLING_EDGE_DETECTOR u_detect_change_mode(
  .I_CLK         (I_CLK),
  .I_RESET_N     (I_RESET_N),
  .I_SIGNAL      (r_async_2[2]),
  .O_FALLING_EDGE(r_sync_change_mode)
);

FALLING_EDGE_DETECTOR u_detect_up(
  .I_CLK         (I_CLK),
  .I_RESET_N     (I_RESET_N),
  .I_SIGNAL      (r_async_2[1]),
  .O_FALLING_EDGE(r_sync_up)
);

FALLING_EDGE_DETECTOR u_detect_down(
  .I_CLK         (I_CLK),
  .I_RESET_N     (I_RESET_N),
  .I_SIGNAL      (r_async_2[0]),
  .O_FALLING_EDGE(r_sync_down)
);

//Changing Duty Cycle Threshold
always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N) 
    r_duty_cycle_th <= 32'h8000_0000;
  else if (r_current_state == ST_DUTY_CYCLE) begin
    case({r_sync_up, r_sync_down})
      2'b10: begin
        if (r_duty_cycle_th <= DUTY_CYCLE_TH_MAX - DUTY_CYCLE_TH_STEP)
          r_duty_cycle_th      <= r_duty_cycle_th + DUTY_CYCLE_TH_STEP;
        else
          r_duty_cycle_th      <= DUTY_CYCLE_TH_MAX;
      end
      2'b01: begin
        if (r_duty_cycle_th >= DUTY_CYCLE_TH_MIN + DUTY_CYCLE_TH_STEP)
          r_duty_cycle_th      <= r_duty_cycle_th - DUTY_CYCLE_TH_STEP;
        else
          r_duty_cycle_th      <= DUTY_CYCLE_TH_MIN;
      end
      default: r_duty_cycle_th <= r_duty_cycle_th;
    endcase
  end    
end

//Changing Phase Frequency Tracking Word
always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N) 
    r_phase_ftw <= 32'h000D_A741; //20Hz at 96kHz sample clock frequency
  else if (r_current_state == ST_FREQ) begin
    case({r_sync_up, r_sync_down})
      2'b10: begin
        if (r_phase_ftw <= PHASE_FTW_MAX - PHASE_FTW_STEP)
          r_phase_ftw      <= r_phase_ftw + PHASE_FTW_STEP;
        else
          r_phase_ftw      <= PHASE_FTW_MAX;
      end
      2'b01: begin
        if (r_phase_ftw >= PHASE_FTW_MIN + PHASE_FTW_STEP)
          r_phase_ftw      <= r_phase_ftw - PHASE_FTW_STEP;
        else
          r_phase_ftw      <= PHASE_FTW_MIN;
      end
      default: r_phase_ftw <= r_phase_ftw;
    endcase
  end    
end

//Changing Amplitude Scaler
always_ff @(posedge I_CLK or negedge I_RESET_N) begin
  if(!I_RESET_N) 
    r_amplitude <= 16'h4000;
  else if (r_current_state == ST_AMPLITUDE) begin
    case({r_sync_up, r_sync_down})
      2'b10: begin
        if (r_amplitude <= AMPLITUDE_MAX - AMPLITUDE_STEP)
          r_amplitude      <= r_amplitude + AMPLITUDE_STEP;
        else
          r_amplitude      <= AMPLITUDE_MAX;
      end
      2'b01: begin
        if (r_amplitude >= AMPLITUDE_MIN + AMPLITUDE_STEP)
          r_amplitude      <= r_amplitude - AMPLITUDE_STEP;
        else
          r_amplitude      <= AMPLITUDE_MIN;
      end
      default: r_amplitude <= r_amplitude;
    endcase
  end    
end

assign O_DUTY_CYCLE_TH = r_duty_cycle_th;
assign O_PHASE_FTW     = r_phase_ftw;
assign O_AMPLITUDE     = r_amplitude;

endmodule: INPUT_CONTROL
