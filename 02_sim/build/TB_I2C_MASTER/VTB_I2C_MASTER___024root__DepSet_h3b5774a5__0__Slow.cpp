// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_I2C_MASTER.h for the primary calling header

#include "VTB_I2C_MASTER__pch.h"
#include "VTB_I2C_MASTER__Syms.h"
#include "VTB_I2C_MASTER___024root.h"

VL_ATTR_COLD void VTB_I2C_MASTER___024root___eval_initial__TOP(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    vlSelf->TB_I2C_MASTER__DOT__expected_words[0U] = 0x1e00U;
    vlSelf->TB_I2C_MASTER__DOT__expected_words[1U] = 0xc00U;
    vlSelf->TB_I2C_MASTER__DOT__expected_words[2U] = 0xe00U;
    vlSelf->TB_I2C_MASTER__DOT__expected_words[3U] = 0x1000U;
    vlSelf->TB_I2C_MASTER__DOT__expected_words[4U] = 0x810U;
    vlSelf->TB_I2C_MASTER__DOT__expected_words[5U] = 0xa00U;
    vlSelf->TB_I2C_MASTER__DOT__expected_words[6U] = 0x479U;
    vlSelf->TB_I2C_MASTER__DOT__expected_words[7U] = 0x679U;
    vlSelf->TB_I2C_MASTER__DOT__expected_words[8U] = 0x1201U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x53544552U;
    __Vtemp_1[2U] = 0x435f4d41U;
    __Vtemp_1[3U] = 0x425f4932U;
    __Vtemp_1[4U] = 0x54U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[0U] = 0x1e00U;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[1U] = 0xc00U;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[2U] = 0xe00U;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[3U] = 0x1000U;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[4U] = 0x810U;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[5U] = 0xa00U;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[6U] = 0x479U;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[7U] = 0x679U;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[8U] = 0x1201U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_I2C_MASTER___024root___dump_triggers__stl(VTB_I2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_I2C_MASTER___024root___eval_triggers__stl(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_I2C_MASTER___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
