// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPHASE_ACCUMULATOR_TB__Syms.h"


VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_init_sub__TOP__0(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("PHASE_ACCUMULATOR_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"ST_INITIAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"ST_WAVE_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"ST_UP_SINE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"ST_DOWN_SINE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"ST_UP_SINE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"ST_UP_SQUARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"ST_UP_TRIANGLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"ST_DOWN_TRIANGLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"ST_UP_SAW_TOOTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESET_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_WAVE_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"I_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"I_FREQ_DELTA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"O_COUNTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+12,0,"O_OVERFLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"O_UNDERFLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"O_STATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"PARA_COUNTER_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESET_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_WAVE_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"I_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"I_FREQ_DELTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"O_COUNTER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+12,0,"O_OVERFLOW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"O_UNDERFLOW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"O_STATE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"RESET_NUMBER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+6,0,"r_phase_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+8,0,"w_phase_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"w_phase_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"w_phase_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"w_phase_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"w_phase_underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"r_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_init_top(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_init_top\n"); );
    // Body
    VPHASE_ACCUMULATOR_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPHASE_ACCUMULATOR_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPHASE_ACCUMULATOR_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_register(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VPHASE_ACCUMULATOR_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VPHASE_ACCUMULATOR_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VPHASE_ACCUMULATOR_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VPHASE_ACCUMULATOR_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_const_0_sub_0(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_const_0\n"); );
    // Init
    VPHASE_ACCUMULATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPHASE_ACCUMULATOR_TB___024root*>(voidSelf);
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPHASE_ACCUMULATOR_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_const_0_sub_0(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+15,(0U),4);
    bufp->fullCData(oldp+16,(1U),4);
    bufp->fullCData(oldp+17,(2U),4);
    bufp->fullCData(oldp+18,(3U),4);
    bufp->fullCData(oldp+19,(4U),4);
    bufp->fullCData(oldp+20,(6U),4);
    bufp->fullCData(oldp+21,(7U),4);
    bufp->fullCData(oldp+22,(8U),4);
    bufp->fullCData(oldp+23,(9U),4);
    bufp->fullIData(oldp+24,(0xfU),32);
    bufp->fullSData(oldp+25,(0U),15);
}

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_full_0_sub_0(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_full_0\n"); );
    // Init
    VPHASE_ACCUMULATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPHASE_ACCUMULATOR_TB___024root*>(voidSelf);
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPHASE_ACCUMULATOR_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root__trace_full_0_sub_0(VPHASE_ACCUMULATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N));
    bufp->fullCData(oldp+2,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_WAVE_TYPE),2);
    bufp->fullBit(oldp+3,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_START));
    bufp->fullSData(oldp+4,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_FREQ_DELTA),16);
    bufp->fullIData(oldp+5,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count),32);
    bufp->fullSData(oldp+6,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter),15);
    bufp->fullCData(oldp+7,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_current_state),4);
    bufp->fullBit(oldp+8,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_clear));
    bufp->fullBit(oldp+9,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_up));
    bufp->fullBit(oldp+10,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__w_phase_down));
    bufp->fullBit(oldp+11,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK));
    bufp->fullBit(oldp+12,(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter) 
                            == (0xffffU & ((IData)(0x4e20U) 
                                           - (IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_FREQ_DELTA))))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter) 
                            == (IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_FREQ_DELTA))));
    bufp->fullCData(oldp+14,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_next_state),4);
}
