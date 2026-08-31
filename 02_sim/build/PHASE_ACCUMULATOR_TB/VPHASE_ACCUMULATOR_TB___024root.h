// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPHASE_ACCUMULATOR_TB.h for the primary calling header

#ifndef VERILATED_VPHASE_ACCUMULATOR_TB___024ROOT_H_
#define VERILATED_VPHASE_ACCUMULATOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VPHASE_ACCUMULATOR_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPHASE_ACCUMULATOR_TB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__I_CLK;
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__I_RESET_N;
    CData/*1:0*/ PHASE_ACCUMULATOR_TB__DOT__I_WAVE_TYPE;
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__I_START;
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_clear;
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_up;
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_down;
    CData/*3:0*/ PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_current_state;
    CData/*3:0*/ PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_RESET_N__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ PHASE_ACCUMULATOR_TB__DOT__I_FREQ_DELTA;
    SData/*14:0*/ PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter;
    IData/*31:0*/ PHASE_ACCUMULATOR_TB__DOT__error_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcf53cd7b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPHASE_ACCUMULATOR_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPHASE_ACCUMULATOR_TB___024root(VPHASE_ACCUMULATOR_TB__Syms* symsp, const char* v__name);
    ~VPHASE_ACCUMULATOR_TB___024root();
    VL_UNCOPYABLE(VPHASE_ACCUMULATOR_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
