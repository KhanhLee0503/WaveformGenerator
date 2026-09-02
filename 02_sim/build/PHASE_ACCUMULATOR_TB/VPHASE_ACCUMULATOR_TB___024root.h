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
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN;
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR;
    CData/*0:0*/ PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_RESET_N__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW;
    IData/*31:0*/ PHASE_ACCUMULATOR_TB__DOT__error_count;
    IData/*31:0*/ PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcf53ce3e__0;
    VlTriggerScheduler __VtrigSched_hcf53cd7b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

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
