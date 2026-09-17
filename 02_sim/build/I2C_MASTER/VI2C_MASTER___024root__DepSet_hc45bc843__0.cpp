// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VI2C_MASTER.h for the primary calling header

#include "VI2C_MASTER__pch.h"
#include "VI2C_MASTER___024root.h"

void VI2C_MASTER___024root___eval_act(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_act\n"); );
}

VL_INLINE_OPT void VI2C_MASTER___024root___nba_sequent__TOP__0(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__I2C_MASTER__DOT__r_tick;
    __Vdly__I2C_MASTER__DOT__r_tick = 0;
    CData/*6:0*/ __Vdly__I2C_MASTER__DOT__r_div_cnt;
    __Vdly__I2C_MASTER__DOT__r_div_cnt = 0;
    CData/*1:0*/ __Vdly__I2C_MASTER__DOT__r_byte_idx;
    __Vdly__I2C_MASTER__DOT__r_byte_idx = 0;
    CData/*2:0*/ __Vdly__I2C_MASTER__DOT__r_bit_idx;
    __Vdly__I2C_MASTER__DOT__r_bit_idx = 0;
    // Body
    __Vdly__I2C_MASTER__DOT__r_div_cnt = vlSelf->I2C_MASTER__DOT__r_div_cnt;
    __Vdly__I2C_MASTER__DOT__r_tick = vlSelf->I2C_MASTER__DOT__r_tick;
    __Vdly__I2C_MASTER__DOT__r_bit_idx = vlSelf->I2C_MASTER__DOT__r_bit_idx;
    __Vdly__I2C_MASTER__DOT__r_byte_idx = vlSelf->I2C_MASTER__DOT__r_byte_idx;
    if (vlSelf->I_RST_N) {
        if ((0x7cU == (IData)(vlSelf->I2C_MASTER__DOT__r_div_cnt))) {
            __Vdly__I2C_MASTER__DOT__r_tick = (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->I2C_MASTER__DOT__r_tick)));
            __Vdly__I2C_MASTER__DOT__r_div_cnt = 0U;
            if ((1U & (~ ((IData)(vlSelf->I2C_MASTER__DOT__r_state) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                    if ((1U & (~ ((IData)(vlSelf->I2C_MASTER__DOT__r_state) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                            if ((8U != (IData)(vlSelf->I2C_MASTER__DOT__r_reg_idx))) {
                                vlSelf->I2C_MASTER__DOT__r_reg_idx 
                                    = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelf->I2C_MASTER__DOT__r_reg_idx)));
                            }
                        }
                        if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_state)))) {
                            if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                                if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                                    __Vdly__I2C_MASTER__DOT__r_byte_idx = 0U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                        if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                            if ((1U & (~ ((IData)(vlSelf->I2C_MASTER__DOT__r_tick) 
                                          >> 1U)))) {
                                vlSelf->I2C_MASTER__DOT__r_scl_release 
                                    = (1U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick));
                            }
                            if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                                if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                                    vlSelf->I2C_MASTER__DOT__r_sda_release = 1U;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                                vlSelf->I2C_MASTER__DOT__r_sda_release = 0U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_state)))) {
                        if ((1U & (~ ((IData)(vlSelf->I2C_MASTER__DOT__r_tick) 
                                      >> 1U)))) {
                            vlSelf->I2C_MASTER__DOT__r_scl_release 
                                = (1U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick));
                        }
                        if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                            if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                                vlSelf->I2C_MASTER__DOT__r_sda_release = 1U;
                            }
                        } else if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                            vlSelf->I2C_MASTER__DOT__r_sda_release = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                    if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                        if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                            if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                                vlSelf->I2C_MASTER__DOT__r_scl_release = 0U;
                            }
                            if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                                if (vlSelf->I2C_MASTER__DOT__r_ack_bit) {
                                    vlSelf->O_I2C_NACK_ERROR = 1U;
                                } else if ((2U != (IData)(vlSelf->I2C_MASTER__DOT__r_byte_idx))) {
                                    __Vdly__I2C_MASTER__DOT__r_byte_idx 
                                        = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelf->I2C_MASTER__DOT__r_byte_idx)));
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                            vlSelf->I2C_MASTER__DOT__r_scl_release = 1U;
                        }
                        if ((1U & (~ ((IData)(vlSelf->I2C_MASTER__DOT__r_tick) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                                vlSelf->I2C_MASTER__DOT__r_sda_release = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                        if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                            vlSelf->I2C_MASTER__DOT__r_scl_release = 0U;
                        }
                        if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                            __Vdly__I2C_MASTER__DOT__r_bit_idx 
                                = ((0U == (IData)(vlSelf->I2C_MASTER__DOT__r_bit_idx))
                                    ? 7U : (7U & ((IData)(vlSelf->I2C_MASTER__DOT__r_bit_idx) 
                                                  - (IData)(1U))));
                        }
                    } else {
                        if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                            vlSelf->I2C_MASTER__DOT__r_scl_release = 1U;
                        }
                        if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                            vlSelf->I2C_MASTER__DOT__r_sda_release 
                                = (1U & (((0U == (IData)(vlSelf->I2C_MASTER__DOT__r_byte_idx))
                                           ? 0x34U : 
                                          (0xffU & 
                                           ((1U == (IData)(vlSelf->I2C_MASTER__DOT__r_byte_idx))
                                             ? ((IData)(vlSelf->I2C_MASTER__DOT____VdfgTmp_h6b98dace__0) 
                                                >> 8U)
                                             : (IData)(vlSelf->I2C_MASTER__DOT____VdfgTmp_h6b98dace__0)))) 
                                         >> (IData)(vlSelf->I2C_MASTER__DOT__r_bit_idx)));
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                        if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                            if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                                vlSelf->I2C_MASTER__DOT__r_scl_release = 0U;
                            }
                            if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                                __Vdly__I2C_MASTER__DOT__r_bit_idx = 7U;
                            }
                        } else if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                            vlSelf->I2C_MASTER__DOT__r_scl_release = 1U;
                            vlSelf->I2C_MASTER__DOT__r_sda_release = 1U;
                        } else {
                            vlSelf->I2C_MASTER__DOT__r_sda_release = 0U;
                        }
                    } else {
                        vlSelf->I2C_MASTER__DOT__r_scl_release = 1U;
                        vlSelf->I2C_MASTER__DOT__r_sda_release = 1U;
                        __Vdly__I2C_MASTER__DOT__r_bit_idx = 7U;
                    }
                    if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_state)))) {
                        __Vdly__I2C_MASTER__DOT__r_byte_idx = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->I2C_MASTER__DOT__r_state) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                        if ((1U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                            if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_tick))) {
                                if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_tick)))) {
                                    vlSelf->I2C_MASTER__DOT__r_ack_bit 
                                        = vlSelf->IO_I2C_SDA;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                if ((1U & (~ ((IData)(vlSelf->I2C_MASTER__DOT__r_state) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->I2C_MASTER__DOT__r_state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_state)))) {
                            vlSelf->O_CONFIG_DONE = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                if ((2U & (IData)(vlSelf->I2C_MASTER__DOT__r_state))) {
                    if ((1U & (~ (IData)(vlSelf->I2C_MASTER__DOT__r_state)))) {
                        vlSelf->O_CONFIG_DONE = 1U;
                    }
                }
            }
            vlSelf->I2C_MASTER__DOT__r_state = vlSelf->I2C_MASTER__DOT__w_next_state;
        } else {
            __Vdly__I2C_MASTER__DOT__r_div_cnt = (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->I2C_MASTER__DOT__r_div_cnt)));
        }
    } else {
        __Vdly__I2C_MASTER__DOT__r_tick = 0U;
        __Vdly__I2C_MASTER__DOT__r_div_cnt = 0U;
        vlSelf->I2C_MASTER__DOT__r_reg_idx = 0U;
        vlSelf->O_CONFIG_DONE = 0U;
        vlSelf->I2C_MASTER__DOT__r_scl_release = 1U;
        vlSelf->I2C_MASTER__DOT__r_sda_release = 1U;
        __Vdly__I2C_MASTER__DOT__r_bit_idx = 7U;
        __Vdly__I2C_MASTER__DOT__r_byte_idx = 0U;
        vlSelf->O_I2C_NACK_ERROR = 0U;
        vlSelf->I2C_MASTER__DOT__r_ack_bit = 0U;
        vlSelf->I2C_MASTER__DOT__r_state = 0U;
    }
    vlSelf->I2C_MASTER__DOT__r_bit_idx = __Vdly__I2C_MASTER__DOT__r_bit_idx;
    vlSelf->I2C_MASTER__DOT__r_byte_idx = __Vdly__I2C_MASTER__DOT__r_byte_idx;
    vlSelf->I2C_MASTER__DOT____VdfgTmp_h6b98dace__0 
        = ((8U >= (IData)(vlSelf->I2C_MASTER__DOT__r_reg_idx))
            ? vlSelf->I2C_MASTER__DOT__r_reg_table[vlSelf->I2C_MASTER__DOT__r_reg_idx]
            : 0U);
    vlSelf->IO_I2C_SCL = vlSelf->I2C_MASTER__DOT__r_scl_release;
    vlSelf->IO_I2C_SDA = vlSelf->I2C_MASTER__DOT__r_sda_release;
    vlSelf->I2C_MASTER__DOT__r_tick = __Vdly__I2C_MASTER__DOT__r_tick;
    vlSelf->I2C_MASTER__DOT__r_div_cnt = __Vdly__I2C_MASTER__DOT__r_div_cnt;
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

void VI2C_MASTER___024root___eval_nba(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VI2C_MASTER___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VI2C_MASTER___024root___eval_triggers__act(VI2C_MASTER___024root* vlSelf);

bool VI2C_MASTER___024root___eval_phase__act(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VI2C_MASTER___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VI2C_MASTER___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VI2C_MASTER___024root___eval_phase__nba(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VI2C_MASTER___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VI2C_MASTER___024root___dump_triggers__nba(VI2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VI2C_MASTER___024root___dump_triggers__act(VI2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG

void VI2C_MASTER___024root___eval(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VI2C_MASTER___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/SystemVerilog/Waveform_Generator/00_src/I2C_MASTER.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VI2C_MASTER___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/SystemVerilog/Waveform_Generator/00_src/I2C_MASTER.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VI2C_MASTER___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VI2C_MASTER___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VI2C_MASTER___024root___eval_debug_assertions(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->I_CLK & 0xfeU))) {
        Verilated::overWidthError("I_CLK");}
    if (VL_UNLIKELY((vlSelf->I_RST_N & 0xfeU))) {
        Verilated::overWidthError("I_RST_N");}
    if (VL_UNLIKELY((vlSelf->IO_I2C_SCL & 0xfeU))) {
        Verilated::overWidthError("IO_I2C_SCL");}
    if (VL_UNLIKELY((vlSelf->IO_I2C_SDA & 0xfeU))) {
        Verilated::overWidthError("IO_I2C_SDA");}
}
#endif  // VL_DEBUG
