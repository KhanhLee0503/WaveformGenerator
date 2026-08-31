// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPHASE_ACCUMULATOR_TB__Syms.h"


void VPHASE_ACCUMULATOR_TB___024root__trace_chg_0_sub_0(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPHASE_ACCUMULATOR_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_chg_0\n"); );
    // Init
    VPHASE_ACCUMULATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPHASE_ACCUMULATOR_TB___024root*>(voidSelf);
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPHASE_ACCUMULATOR_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPHASE_ACCUMULATOR_TB___024root__trace_chg_0_sub_0(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N));
        bufp->chgCData(oldp+1,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_WAVE_TYPE),2);
        bufp->chgBit(oldp+2,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_START));
        bufp->chgSData(oldp+3,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_FREQ_DELTA),16);
        bufp->chgIData(oldp+4,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+5,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter),15);
        bufp->chgCData(oldp+6,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_current_state),4);
        bufp->chgBit(oldp+7,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_clear));
        bufp->chgBit(oldp+8,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_up));
        bufp->chgBit(oldp+9,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_down));
    }
    bufp->chgBit(oldp+10,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK));
    bufp->chgBit(oldp+11,(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter) 
                           == (0xffffU & ((IData)(0x4e20U) 
                                          - (IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_FREQ_DELTA))))));
    bufp->chgBit(oldp+12,(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter) 
                           == (IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_FREQ_DELTA))));
    bufp->chgCData(oldp+13,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_next_state),4);
}

void VPHASE_ACCUMULATOR_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_cleanup\n"); );
    // Init
    VPHASE_ACCUMULATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPHASE_ACCUMULATOR_TB___024root*>(voidSelf);
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
