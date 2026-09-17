// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_I2C_MASTER__Syms.h"


void VTB_I2C_MASTER___024root__trace_chg_0_sub_0(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_I2C_MASTER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_chg_0\n"); );
    // Init
    VTB_I2C_MASTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_I2C_MASTER___024root*>(voidSelf);
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_I2C_MASTER___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_I2C_MASTER___024root__trace_chg_0_sub_0(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->TB_I2C_MASTER__DOT__expected_words[0]),16);
        bufp->chgSData(oldp+1,(vlSelf->TB_I2C_MASTER__DOT__expected_words[1]),16);
        bufp->chgSData(oldp+2,(vlSelf->TB_I2C_MASTER__DOT__expected_words[2]),16);
        bufp->chgSData(oldp+3,(vlSelf->TB_I2C_MASTER__DOT__expected_words[3]),16);
        bufp->chgSData(oldp+4,(vlSelf->TB_I2C_MASTER__DOT__expected_words[4]),16);
        bufp->chgSData(oldp+5,(vlSelf->TB_I2C_MASTER__DOT__expected_words[5]),16);
        bufp->chgSData(oldp+6,(vlSelf->TB_I2C_MASTER__DOT__expected_words[6]),16);
        bufp->chgSData(oldp+7,(vlSelf->TB_I2C_MASTER__DOT__expected_words[7]),16);
        bufp->chgSData(oldp+8,(vlSelf->TB_I2C_MASTER__DOT__expected_words[8]),16);
        bufp->chgSData(oldp+9,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[0]),16);
        bufp->chgSData(oldp+10,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[1]),16);
        bufp->chgSData(oldp+11,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[2]),16);
        bufp->chgSData(oldp+12,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[3]),16);
        bufp->chgSData(oldp+13,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[4]),16);
        bufp->chgSData(oldp+14,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[5]),16);
        bufp->chgSData(oldp+15,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[6]),16);
        bufp->chgSData(oldp+16,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[7]),16);
        bufp->chgSData(oldp+17,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[8]),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+18,(vlSelf->TB_I2C_MASTER__DOT__rx_bytes[0]),8);
        bufp->chgCData(oldp+19,(vlSelf->TB_I2C_MASTER__DOT__rx_bytes[1]),8);
        bufp->chgCData(oldp+20,(vlSelf->TB_I2C_MASTER__DOT__rx_bytes[2]),8);
        bufp->chgCData(oldp+21,(vlSelf->TB_I2C_MASTER__DOT__rx_byte),8);
        bufp->chgIData(oldp+22,(vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__byte_index),32);
        bufp->chgIData(oldp+23,(vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+24,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r));
        bufp->chgBit(oldp+25,(vlSelf->TB_I2C_MASTER__DOT__config_done));
        bufp->chgBit(oldp+26,(vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error));
        bufp->chgCData(oldp+27,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt),7);
        bufp->chgCData(oldp+28,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick),2);
        bufp->chgBit(oldp+29,((0x7cU == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt))));
        bufp->chgCData(oldp+30,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state),4);
        bufp->chgCData(oldp+31,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state),4);
        bufp->chgCData(oldp+32,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx),2);
        bufp->chgCData(oldp+33,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx),3);
        bufp->chgCData(oldp+34,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx),4);
        bufp->chgBit(oldp+35,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__ack_bit));
        bufp->chgBit(oldp+36,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out));
        bufp->chgBit(oldp+37,(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe));
        bufp->chgCData(oldp+38,((0xffU & ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0) 
                                          >> 8U))),8);
        bufp->chgCData(oldp+39,((0xffU & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0))),8);
        bufp->chgCData(oldp+40,(((0U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx))
                                  ? 0x34U : (0xffU 
                                             & ((1U 
                                                 == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx))
                                                 ? 
                                                ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0) 
                                                 >> 8U)
                                                 : (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0))))),8);
    }
    bufp->chgBit(oldp+41,(vlSelf->TB_I2C_MASTER__DOT__clk));
    bufp->chgBit(oldp+42,(vlSelf->TB_I2C_MASTER__DOT__rst_n));
    bufp->chgBit(oldp+43,(vlSelf->TB_I2C_MASTER__DOT__i2c_sda));
    bufp->chgBit(oldp+44,(vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low));
    bufp->chgIData(oldp+45,(vlSelf->TB_I2C_MASTER__DOT__transaction_count),32);
    bufp->chgIData(oldp+46,(vlSelf->TB_I2C_MASTER__DOT__error_count),32);
}

void VTB_I2C_MASTER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root__trace_cleanup\n"); );
    // Init
    VTB_I2C_MASTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_I2C_MASTER___024root*>(voidSelf);
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
