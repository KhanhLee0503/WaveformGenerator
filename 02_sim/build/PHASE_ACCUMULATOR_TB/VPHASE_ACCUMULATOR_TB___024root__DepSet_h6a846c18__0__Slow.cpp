// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHASE_ACCUMULATOR_TB.h for the primary calling header

#include "VPHASE_ACCUMULATOR_TB__pch.h"
#include "VPHASE_ACCUMULATOR_TB___024root.h"

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___eval_static(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___eval_final(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___dump_triggers__stl(VPHASE_ACCUMULATOR_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPHASE_ACCUMULATOR_TB___024root___eval_phase__stl(VPHASE_ACCUMULATOR_TB___024root* vlSelf);

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___eval_settle(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VPHASE_ACCUMULATOR_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VPHASE_ACCUMULATOR_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___dump_triggers__stl(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VPHASE_ACCUMULATOR_TB___024root___act_comb__TOP__0(VPHASE_ACCUMULATOR_TB___024root* vlSelf);

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___eval_stl(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VPHASE_ACCUMULATOR_TB___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___eval_triggers__stl(VPHASE_ACCUMULATOR_TB___024root* vlSelf);

VL_ATTR_COLD bool VPHASE_ACCUMULATOR_TB___024root___eval_phase__stl(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VPHASE_ACCUMULATOR_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VPHASE_ACCUMULATOR_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___dump_triggers__act(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge PHASE_ACCUMULATOR_TB.I_CLK or negedge PHASE_ACCUMULATOR_TB.I_RESET_N)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge PHASE_ACCUMULATOR_TB.I_CLK)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge PHASE_ACCUMULATOR_TB.I_CLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___dump_triggers__nba(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge PHASE_ACCUMULATOR_TB.I_CLK or negedge PHASE_ACCUMULATOR_TB.I_RESET_N)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge PHASE_ACCUMULATOR_TB.I_CLK)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge PHASE_ACCUMULATOR_TB.I_CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___ctor_var_reset(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = VL_RAND_RESET_I(1);
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = VL_RAND_RESET_I(1);
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = VL_RAND_RESET_I(32);
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR = VL_RAND_RESET_I(1);
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR = VL_RAND_RESET_I(1);
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count = 0;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_RESET_N__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
