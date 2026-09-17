// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_I2C_MASTER__Syms.h"


VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_init_sub__TOP__0(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TB_I2C_MASTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"CLK_HZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+49,0,"I2C_HZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+50,0,"NUM_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"i2c_scl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"i2c_sda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"config_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"i2c_nack_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"slave_sda_drive_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("expected_words", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rx_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+22,0,"rx_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"transaction_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+47,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"CLK_HZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"I2C_HZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"NUM_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"i2c_scl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"i2c_sda",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"config_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"i2c_nack_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"WM8731_I2C_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("reg_table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+55,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+28,0,"div_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+29,0,"tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+30,0,"tick_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"byte_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"bit_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"reg_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+36,0,"ack_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"scl_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"sda_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"sda_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"addr_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"hi_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"lo_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"cur_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("slave_model", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"byte_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+24,0,"bit_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_init_top(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_init_top\n"); );
    // Body
    VTB_I2C_MASTER___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_I2C_MASTER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_I2C_MASTER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_register(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTB_I2C_MASTER___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTB_I2C_MASTER___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTB_I2C_MASTER___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTB_I2C_MASTER___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_const_0_sub_0(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_const_0\n"); );
    // Init
    VTB_I2C_MASTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_I2C_MASTER___024root*>(voidSelf);
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_I2C_MASTER___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_const_0_sub_0(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+48,(0x2faf080U),32);
    bufp->fullIData(oldp+49,(0x186a0U),32);
    bufp->fullIData(oldp+50,(9U),32);
    bufp->fullIData(oldp+51,(0x2faf080U),32);
    bufp->fullIData(oldp+52,(0x186a0U),32);
    bufp->fullIData(oldp+53,(9U),32);
    bufp->fullCData(oldp+54,(0x1aU),7);
    bufp->fullIData(oldp+55,(0x7dU),32);
    bufp->fullCData(oldp+56,(0x34U),8);
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_full_0_sub_0(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_full_0\n"); );
    // Init
    VTB_I2C_MASTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_I2C_MASTER___024root*>(voidSelf);
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_I2C_MASTER___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_full_0_sub_0(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->TB_I2C_MASTER__DOT__expected_words[0]),16);
    bufp->fullSData(oldp+2,(vlSelf->TB_I2C_MASTER__DOT__expected_words[1]),16);
    bufp->fullSData(oldp+3,(vlSelf->TB_I2C_MASTER__DOT__expected_words[2]),16);
    bufp->fullSData(oldp+4,(vlSelf->TB_I2C_MASTER__DOT__expected_words[3]),16);
    bufp->fullSData(oldp+5,(vlSelf->TB_I2C_MASTER__DOT__expected_words[4]),16);
    bufp->fullSData(oldp+6,(vlSelf->TB_I2C_MASTER__DOT__expected_words[5]),16);
    bufp->fullSData(oldp+7,(vlSelf->TB_I2C_MASTER__DOT__expected_words[6]),16);
    bufp->fullSData(oldp+8,(vlSelf->TB_I2C_MASTER__DOT__expected_words[7]),16);
    bufp->fullSData(oldp+9,(vlSelf->TB_I2C_MASTER__DOT__expected_words[8]),16);
    bufp->fullSData(oldp+10,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[0]),16);
    bufp->fullSData(oldp+11,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[1]),16);
    bufp->fullSData(oldp+12,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[2]),16);
    bufp->fullSData(oldp+13,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[3]),16);
    bufp->fullSData(oldp+14,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[4]),16);
    bufp->fullSData(oldp+15,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[5]),16);
    bufp->fullSData(oldp+16,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[6]),16);
    bufp->fullSData(oldp+17,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[7]),16);
    bufp->fullSData(oldp+18,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[8]),16);
    bufp->fullCData(oldp+19,(vlSelf->TB_I2C_MASTER__DOT__rx_bytes[0]),8);
    bufp->fullCData(oldp+20,(vlSelf->TB_I2C_MASTER__DOT__rx_bytes[1]),8);
    bufp->fullCData(oldp+21,(vlSelf->TB_I2C_MASTER__DOT__rx_bytes[2]),8);
    bufp->fullCData(oldp+22,(vlSelf->TB_I2C_MASTER__DOT__rx_byte),8);
    bufp->fullIData(oldp+23,(vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__byte_index),32);
    bufp->fullIData(oldp+24,(vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index),32);
    bufp->fullBit(oldp+25,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r));
    bufp->fullBit(oldp+26,(vlSelf->TB_I2C_MASTER__DOT__config_done));
    bufp->fullBit(oldp+27,(vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error));
    bufp->fullCData(oldp+28,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt),7);
    bufp->fullCData(oldp+29,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick),2);
    bufp->fullBit(oldp+30,((0x7cU == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt))));
    bufp->fullCData(oldp+31,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state),4);
    bufp->fullCData(oldp+32,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state),4);
    bufp->fullCData(oldp+33,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx),2);
    bufp->fullCData(oldp+34,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx),3);
    bufp->fullCData(oldp+35,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx),4);
    bufp->fullBit(oldp+36,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__ack_bit));
    bufp->fullBit(oldp+37,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out));
    bufp->fullBit(oldp+38,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe));
    bufp->fullCData(oldp+39,((0xffU & ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0) 
                                       >> 8U))),8);
    bufp->fullCData(oldp+40,((0xffU & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0))),8);
    bufp->fullCData(oldp+41,(((0U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx))
                               ? 0x34U : (0xffU & (
                                                   (1U 
                                                    == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx))
                                                    ? 
                                                   ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0) 
                                                    >> 8U)
                                                    : (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0))))),8);
    bufp->fullBit(oldp+42,(vlSelf->TB_I2C_MASTER__DOT__clk));
    bufp->fullBit(oldp+43,(vlSelf->TB_I2C_MASTER__DOT__rst_n));
    bufp->fullBit(oldp+44,(vlSelf->TB_I2C_MASTER__DOT__i2c_sda));
    bufp->fullBit(oldp+45,(vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low));
    bufp->fullIData(oldp+46,(vlSelf->TB_I2C_MASTER__DOT__transaction_count),32);
    bufp->fullIData(oldp+47,(vlSelf->TB_I2C_MASTER__DOT__error_count),32);
}
