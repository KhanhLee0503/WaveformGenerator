// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_I2C_MASTER.h for the primary calling header

#include "VTB_I2C_MASTER__pch.h"
#include "VTB_I2C_MASTER___024root.h"

VL_ATTR_COLD void VTB_I2C_MASTER___024root___eval_static(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root___eval_final(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_I2C_MASTER___024root___dump_triggers__stl(VTB_I2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTB_I2C_MASTER___024root___eval_phase__stl(VTB_I2C_MASTER___024root* vlSelf);

VL_ATTR_COLD void VTB_I2C_MASTER___024root___eval_settle(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_settle\n"); );
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
            VTB_I2C_MASTER___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/TB_I2C_MASTER.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTB_I2C_MASTER___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_I2C_MASTER___024root___dump_triggers__stl(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_I2C_MASTER___024root___stl_sequent__TOP__0(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0 
        = ((8U >= (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx))
            ? vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table
           [vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx]
            : 0U);
    vlSelf->TB_I2C_MASTER__DOT__i2c_sda = (1U & ((~ 
                                                  ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe) 
                                                   | (IData)(vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low))) 
                                                 | ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe) 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out))));
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state 
        = vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state;
    if ((8U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state 
            = ((4U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))
                ? 0U : ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))
                         ? 0U : ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))
                                  ? 0U : 8U)));
    } else if ((4U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
        if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                if ((3U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state = 8U;
                }
            } else {
                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state = 6U;
            }
        } else if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state 
                = ((8U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx))
                    ? 6U : 1U);
        } else if ((3U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
            if ((3U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state 
                    = ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__ack_bit)
                        ? 7U : ((2U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx))
                                 ? 4U : 2U));
            }
        } else if (((3U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)) 
                    & (0U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx)))) {
            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
        if ((3U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state = 2U;
        }
    } else {
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state = 1U;
    }
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root___eval_stl(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTB_I2C_MASTER___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root___eval_triggers__stl(VTB_I2C_MASTER___024root* vlSelf);

VL_ATTR_COLD bool VTB_I2C_MASTER___024root___eval_phase__stl(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTB_I2C_MASTER___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTB_I2C_MASTER___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_I2C_MASTER___024root___dump_triggers__act(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TB_I2C_MASTER.clk or negedge TB_I2C_MASTER.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge TB_I2C_MASTER.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge TB_I2C_MASTER.i2c_sda)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge TB_I2C_MASTER.dut.scl_r)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge TB_I2C_MASTER.dut.scl_r)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] TB_I2C_MASTER.rst_n)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] (TB_I2C_MASTER.config_done | TB_I2C_MASTER.i2c_nack_error))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_I2C_MASTER___024root___dump_triggers__nba(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TB_I2C_MASTER.clk or negedge TB_I2C_MASTER.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge TB_I2C_MASTER.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge TB_I2C_MASTER.i2c_sda)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge TB_I2C_MASTER.dut.scl_r)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge TB_I2C_MASTER.dut.scl_r)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] TB_I2C_MASTER.rst_n)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] (TB_I2C_MASTER.config_done | TB_I2C_MASTER.i2c_nack_error))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_I2C_MASTER___024root___ctor_var_reset(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TB_I2C_MASTER__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__i2c_sda = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__config_done = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->TB_I2C_MASTER__DOT__expected_words[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TB_I2C_MASTER__DOT__rx_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TB_I2C_MASTER__DOT__rx_byte = VL_RAND_RESET_I(8);
    vlSelf->TB_I2C_MASTER__DOT__transaction_count = VL_RAND_RESET_I(32);
    vlSelf->TB_I2C_MASTER__DOT__error_count = VL_RAND_RESET_I(32);
    vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__byte_index = VL_RAND_RESET_I(32);
    vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = VL_RAND_RESET_I(32);
    vlSelf->TB_I2C_MASTER__DOT____Vlvbound_h3f9a980f__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt = VL_RAND_RESET_I(7);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick = VL_RAND_RESET_I(2);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx = VL_RAND_RESET_I(2);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx = VL_RAND_RESET_I(3);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx = VL_RAND_RESET_I(4);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__ack_bit = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe = VL_RAND_RESET_I(1);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__i2c_sda__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__dut__DOT__scl_r__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h1b5dd174__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
