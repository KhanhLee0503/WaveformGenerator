// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHASE_ACCUMULATOR_TB.h for the primary calling header

#include "VPHASE_ACCUMULATOR_TB__pch.h"
#include "VPHASE_ACCUMULATOR_TB___024root.h"

VlCoroutine VPHASE_ACCUMULATOR_TB___024root___eval_initial__TOP__Vtiming__0(VPHASE_ACCUMULATOR_TB___024root* vlSelf);
VlCoroutine VPHASE_ACCUMULATOR_TB___024root___eval_initial__TOP__Vtiming__1(VPHASE_ACCUMULATOR_TB___024root* vlSelf);

void VPHASE_ACCUMULATOR_TB___024root___eval_initial(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VPHASE_ACCUMULATOR_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VPHASE_ACCUMULATOR_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0 
        = vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_RESET_N__0 
        = vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N;
}

VL_INLINE_OPT VlCoroutine VPHASE_ACCUMULATOR_TB___024root___eval_initial__TOP__Vtiming__1(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                           29);
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK = 
            (1U & (~ (IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK)));
    }
}

VL_INLINE_OPT void VPHASE_ACCUMULATOR_TB___024root___act_comb__TOP__0(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR 
        = ((0xda741U > vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW) 
           | (0x35555555U < vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW));
}

void VPHASE_ACCUMULATOR_TB___024root___eval_act(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_act\n"); );
    // Body
    if ((0xeULL & vlSelf->__VactTriggered.word(0U))) {
        VPHASE_ACCUMULATOR_TB___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VPHASE_ACCUMULATOR_TB___024root___nba_sequent__TOP__0(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter;
    __Vdly__PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter = 0;
    // Body
    __Vdly__PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
        = vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter;
    if (vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N) {
        if (vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR) {
            __Vdly__PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter = 0U;
        } else if (vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN) {
            __Vdly__PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                = (vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                   + vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW);
        }
    } else {
        __Vdly__PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter = 0U;
    }
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
        = __Vdly__PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter;
}

void VPHASE_ACCUMULATOR_TB___024root___eval_nba(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VPHASE_ACCUMULATOR_TB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        VPHASE_ACCUMULATOR_TB___024root___act_comb__TOP__0(vlSelf);
    }
}

void VPHASE_ACCUMULATOR_TB___024root___timing_resume(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcf53ce3e__0.resume("@(negedge PHASE_ACCUMULATOR_TB.I_CLK)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcf53cd7b__0.resume("@(posedge PHASE_ACCUMULATOR_TB.I_CLK)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VPHASE_ACCUMULATOR_TB___024root___timing_commit(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcf53ce3e__0.commit("@(negedge PHASE_ACCUMULATOR_TB.I_CLK)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcf53cd7b__0.commit("@(posedge PHASE_ACCUMULATOR_TB.I_CLK)");
    }
}

void VPHASE_ACCUMULATOR_TB___024root___eval_triggers__act(VPHASE_ACCUMULATOR_TB___024root* vlSelf);

bool VPHASE_ACCUMULATOR_TB___024root___eval_phase__act(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VPHASE_ACCUMULATOR_TB___024root___eval_triggers__act(vlSelf);
    VPHASE_ACCUMULATOR_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VPHASE_ACCUMULATOR_TB___024root___timing_resume(vlSelf);
        VPHASE_ACCUMULATOR_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VPHASE_ACCUMULATOR_TB___024root___eval_phase__nba(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VPHASE_ACCUMULATOR_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___dump_triggers__nba(VPHASE_ACCUMULATOR_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___dump_triggers__act(VPHASE_ACCUMULATOR_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VPHASE_ACCUMULATOR_TB___024root___eval(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VPHASE_ACCUMULATOR_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VPHASE_ACCUMULATOR_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VPHASE_ACCUMULATOR_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VPHASE_ACCUMULATOR_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VPHASE_ACCUMULATOR_TB___024root___eval_debug_assertions(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
