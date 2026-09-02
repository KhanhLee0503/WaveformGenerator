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
    tracep->declBus(c+9,0,"COUNTER_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"MIN_FTW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"MAX_FTW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESET_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_PHASE_SAMPLE_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"I_PHASE_FTW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"I_PHASE_CLEAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"O_PHASE_COUNTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"O_PHASE_FREQ_RANGE_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"PARA_COUNTER_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESET_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_PHASE_SAMPLE_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"I_PHASE_FTW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"I_PHASE_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"O_PHASE_COUNTER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"O_PHASE_FREQ_RANGE_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"r_phase_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullIData(oldp+9,(0x20U),32);
    bufp->fullIData(oldp+10,(0xda741U),32);
    bufp->fullIData(oldp+11,(0x35555555U),32);
    bufp->fullIData(oldp+12,(0x20U),32);
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
    bufp->fullBit(oldp+2,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN));
    bufp->fullIData(oldp+3,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW),32);
    bufp->fullBit(oldp+4,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR));
    bufp->fullBit(oldp+5,(((0xda741U > vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW) 
                           | (0x35555555U < vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW))));
    bufp->fullIData(oldp+6,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count),32);
    bufp->fullBit(oldp+7,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK));
    bufp->fullIData(oldp+8,(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter),32);
}
