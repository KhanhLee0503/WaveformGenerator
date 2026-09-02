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
        bufp->chgBit(oldp+1,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN));
        bufp->chgIData(oldp+2,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW),32);
        bufp->chgBit(oldp+3,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR));
        bufp->chgBit(oldp+4,(((0xda741U > vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW) 
                              | (0x35555555U < vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW))));
        bufp->chgIData(oldp+5,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count),32);
    }
    bufp->chgBit(oldp+6,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK));
    bufp->chgIData(oldp+7,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter),32);
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
}
