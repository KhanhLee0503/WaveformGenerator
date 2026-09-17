// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VI2C_MASTER.h for the primary calling header

#include "VI2C_MASTER__pch.h"
#include "VI2C_MASTER___024root.h"

VL_ATTR_COLD void VI2C_MASTER___024root___eval_static(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_static\n"); );
}

VL_ATTR_COLD void VI2C_MASTER___024root___eval_initial__TOP(VI2C_MASTER___024root* vlSelf);

VL_ATTR_COLD void VI2C_MASTER___024root___eval_initial(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_initial\n"); );
    // Body
    VI2C_MASTER___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__I_CLK__0 = vlSelf->I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__I_RST_N__0 = vlSelf->I_RST_N;
}

VL_ATTR_COLD void VI2C_MASTER___024root___eval_initial__TOP(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->I2C_MASTER__DOT__r_reg_table[0U] = 0x1e00U;
    vlSelf->I2C_MASTER__DOT__r_reg_table[1U] = 0xc00U;
    vlSelf->I2C_MASTER__DOT__r_reg_table[2U] = 0xe00U;
    vlSelf->I2C_MASTER__DOT__r_reg_table[3U] = 0x1000U;
    vlSelf->I2C_MASTER__DOT__r_reg_table[4U] = 0x810U;
    vlSelf->I2C_MASTER__DOT__r_reg_table[5U] = 0xa00U;
    vlSelf->I2C_MASTER__DOT__r_reg_table[6U] = 0x479U;
    vlSelf->I2C_MASTER__DOT__r_reg_table[7U] = 0x679U;
    vlSelf->I2C_MASTER__DOT__r_reg_table[8U] = 0x1201U;
}

VL_ATTR_COLD void VI2C_MASTER___024root___eval_final(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VI2C_MASTER___024root___dump_triggers__stl(VI2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VI2C_MASTER___024root___eval_phase__stl(VI2C_MASTER___024root* vlSelf);

VL_ATTR_COLD void VI2C_MASTER___024root___eval_settle(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_settle\n"); );
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
            VI2C_MASTER___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/SystemVerilog/Waveform_Generator/00_src/I2C_MASTER.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VI2C_MASTER___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VI2C_MASTER___024root___dump_triggers__stl(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VI2C_MASTER___024root___stl_sequent__TOP__0(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->IO_I2C_SCL = vlSelf->I2C_MASTER__DOT__r_scl_release;
    vlSelf->IO_I2C_SDA = vlSelf->I2C_MASTER__DOT__r_sda_release;
    vlSelf->I2C_MASTER__DOT____VdfgTmp_h6b98dace__0 
        = ((8U >= (IData)(vlSelf->I2C_MASTER__DOT__r_reg_idx))
            ? vlSelf->I2C_MASTER__DOT__r_reg_table[vlSelf->I2C_MASTER__DOT__r_reg_idx]
            : 0U);
    vlSelf->I2C_MASTER__DOT__w_next_state = vlSelf->I2C_MASTER__DOT__r_state;
    if ((8U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
        vlSelf->I2C_MASTER__DOT__w_next_state = ((4U 
                                                  & (IData)(vlSelf->I2C_MASTER__DOT__r_state))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->I2C_MASTER__DOT__r_state))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->I2C_MASTER__DOT__r_state))
                                                    ? 0U
                                                    : 8U)));
    } else if ((4U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
        if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
            if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                if ((3U == (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                    vlSelf->I2C_MASTER__DOT__w_next_state = 8U;
                }
            } else {
                vlSelf->I2C_MASTER__DOT__w_next_state = 6U;
            }
        } else if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
            vlSelf->I2C_MASTER__DOT__w_next_state = 
                ((8U == (IData)(vlSelf->I2C_MASTER__DOT__r_reg_idx))
                  ? 6U : 1U);
        } else if ((3U == (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
            vlSelf->I2C_MASTER__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
        if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
            if ((3U == (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                vlSelf->I2C_MASTER__DOT__w_next_state 
                    = ((IData)(vlSelf->I2C_MASTER__DOT__r_ack_bit)
                        ? 7U : ((2U == (IData)(vlSelf->I2C_MASTER__DOT__r_byte_idx))
                                 ? 4U : 2U));
            }
        } else if (((3U == (IData)(vlSelf->I2C_MASTER__DOT__r_tick)) 
                    & (0U == (IData)(vlSelf->I2C_MASTER__DOT__r_bit_idx)))) {
            vlSelf->I2C_MASTER__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
        if ((3U == (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
            vlSelf->I2C_MASTER__DOT__w_next_state = 2U;
        }
    } else {
        vlSelf->I2C_MASTER__DOT__w_next_state = 1U;
    }
}

VL_ATTR_COLD void VI2C_MASTER___024root___eval_stl(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VI2C_MASTER___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VI2C_MASTER___024root___eval_triggers__stl(VI2C_MASTER___024root* vlSelf);

VL_ATTR_COLD bool VI2C_MASTER___024root___eval_phase__stl(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VI2C_MASTER___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VI2C_MASTER___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VI2C_MASTER___024root___dump_triggers__act(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge I_CLK or negedge I_RST_N)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VI2C_MASTER___024root___dump_triggers__nba(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge I_CLK or negedge I_RST_N)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VI2C_MASTER___024root___ctor_var_reset(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->I_CLK = VL_RAND_RESET_I(1);
    vlSelf->I_RST_N = VL_RAND_RESET_I(1);
    vlSelf->IO_I2C_SCL = VL_RAND_RESET_I(1);
    vlSelf->IO_I2C_SDA = VL_RAND_RESET_I(1);
    vlSelf->O_CONFIG_DONE = VL_RAND_RESET_I(1);
    vlSelf->O_I2C_NACK_ERROR = VL_RAND_RESET_I(1);
    vlSelf->I2C_MASTER__DOT__r_div_cnt = VL_RAND_RESET_I(7);
    vlSelf->I2C_MASTER__DOT__r_tick = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->I2C_MASTER__DOT__r_reg_table[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->I2C_MASTER__DOT__r_byte_idx = VL_RAND_RESET_I(2);
    vlSelf->I2C_MASTER__DOT__r_bit_idx = VL_RAND_RESET_I(3);
    vlSelf->I2C_MASTER__DOT__r_reg_idx = VL_RAND_RESET_I(4);
    vlSelf->I2C_MASTER__DOT__r_ack_bit = VL_RAND_RESET_I(1);
    vlSelf->I2C_MASTER__DOT__r_sda_release = VL_RAND_RESET_I(1);
    vlSelf->I2C_MASTER__DOT__r_scl_release = VL_RAND_RESET_I(1);
    vlSelf->I2C_MASTER__DOT__r_state = VL_RAND_RESET_I(4);
    vlSelf->I2C_MASTER__DOT__w_next_state = VL_RAND_RESET_I(4);
    vlSelf->I2C_MASTER__DOT____VdfgTmp_h6b98dace__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__I_RST_N__0 = VL_RAND_RESET_I(1);
}
