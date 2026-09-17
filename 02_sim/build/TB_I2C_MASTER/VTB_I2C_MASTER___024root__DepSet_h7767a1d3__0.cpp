// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_I2C_MASTER.h for the primary calling header

#include "VTB_I2C_MASTER__pch.h"
#include "VTB_I2C_MASTER___024root.h"

VL_ATTR_COLD void VTB_I2C_MASTER___024root___eval_initial__TOP(VTB_I2C_MASTER___024root* vlSelf);
VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__0(VTB_I2C_MASTER___024root* vlSelf);
VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__1(VTB_I2C_MASTER___024root* vlSelf);
VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__2(VTB_I2C_MASTER___024root* vlSelf);
VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3(VTB_I2C_MASTER___024root* vlSelf, VlProcessRef vlProcess);

void VTB_I2C_MASTER___024root___eval_initial(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_initial\n"); );
    // Body
    VTB_I2C_MASTER___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3(vlSelf, std::make_shared<VlProcess>());
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__clk__0 
        = vlSelf->TB_I2C_MASTER__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__rst_n__0 
        = vlSelf->TB_I2C_MASTER__DOT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__i2c_sda__0 
        = vlSelf->TB_I2C_MASTER__DOT__i2c_sda;
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__dut__DOT__scl_r__0 
        = vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r;
    vlSelf->__Vtrigprevexpr_h1b5dd174__0 = ((IData)(vlSelf->TB_I2C_MASTER__DOT__config_done) 
                                            | (IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error));
}

VL_INLINE_OPT VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__0(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->TB_I2C_MASTER__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "../01_tb/TB_I2C_MASTER.sv", 
                                           45);
        vlSelf->TB_I2C_MASTER__DOT__clk = (1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__1(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->TB_I2C_MASTER__DOT__rst_n = 0U;
    vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low = 0U;
    vlSelf->TB_I2C_MASTER__DOT__transaction_count = 0U;
    vlSelf->TB_I2C_MASTER__DOT__error_count = 0U;
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       68);
    vlSelf->TB_I2C_MASTER__DOT__rst_n = 1U;
}

VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(VTB_I2C_MASTER___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3____Vfork_1__1(VTB_I2C_MASTER___024root* vlSelf, VlProcessRef vlProcess);

VL_INLINE_OPT VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3(VTB_I2C_MASTER___024root* vlSelf, VlProcessRef vlProcess) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__rst_n)))) {
        co_await vlSelf->__VtrigSched_hbc03cf0a__0.trigger(1U, 
                                                           vlProcess, 
                                                           "@([changed] TB_I2C_MASTER.rst_n)", 
                                                           "../01_tb/TB_I2C_MASTER.sv", 
                                                           141);
    }
    vlSelf->__Vfork_1__sync.init(1U, vlProcess);
    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(vlSelf, std::make_shared<VlProcess>(vlProcess));
    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3____Vfork_1__1(vlSelf, std::make_shared<VlProcess>(vlProcess));
    co_await vlSelf->__Vfork_1__sync.join(vlProcess, 
                                          "../01_tb/TB_I2C_MASTER.sv", 
                                          143);
    vlProcess->disableFork();
    vlProcess->state(VlProcess::FINISHED);
}

VL_INLINE_OPT void VTB_I2C_MASTER___024root___act_comb__TOP__0(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->TB_I2C_MASTER__DOT__i2c_sda = (1U & ((~ 
                                                  ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe) 
                                                   | (IData)(vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low))) 
                                                 | ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe) 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out))));
}

void VTB_I2C_MASTER___024root___eval_act(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_act\n"); );
    // Body
    if ((0x3cULL & vlSelf->__VactTriggered.word(0U))) {
        VTB_I2C_MASTER___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTB_I2C_MASTER___024root___nba_sequent__TOP__0(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__TB_I2C_MASTER__DOT__dut__DOT__tick;
    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__tick = 0;
    CData/*6:0*/ __Vdly__TB_I2C_MASTER__DOT__dut__DOT__div_cnt;
    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__div_cnt = 0;
    CData/*1:0*/ __Vdly__TB_I2C_MASTER__DOT__dut__DOT__byte_idx;
    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__byte_idx = 0;
    CData/*2:0*/ __Vdly__TB_I2C_MASTER__DOT__dut__DOT__bit_idx;
    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__bit_idx = 0;
    // Body
    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__div_cnt = vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt;
    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__tick = vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick;
    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__bit_idx = vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx;
    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__byte_idx 
        = vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx;
    if (vlSelf->TB_I2C_MASTER__DOT__rst_n) {
        if ((0x7cU == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt))) {
            __Vdly__TB_I2C_MASTER__DOT__dut__DOT__tick 
                = (3U & ((IData)(1U) + (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)));
            __Vdly__TB_I2C_MASTER__DOT__dut__DOT__div_cnt = 0U;
            if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                    if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                            if ((8U != (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx 
                                    = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx)));
                            }
                        }
                        if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state)))) {
                            if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                                if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                                    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__byte_idx = 0U;
                                }
                            }
                        }
                    }
                    if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                        if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                            if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick) 
                                          >> 1U)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r 
                                    = (1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick));
                                if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out = 0U;
                                }
                            }
                            if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                                if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe = 0U;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state)))) {
                        if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick) 
                                      >> 1U)))) {
                            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r 
                                = (1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick));
                            if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                            if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe = 0U;
                            }
                        } else if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                    if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                        if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                            if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = 0U;
                            }
                            if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                                if (vlSelf->TB_I2C_MASTER__DOT__dut__DOT__ack_bit) {
                                    vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error = 1U;
                                } else if ((2U != (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx))) {
                                    __Vdly__TB_I2C_MASTER__DOT__dut__DOT__byte_idx 
                                        = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx)));
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = 1U;
                        }
                        if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe = 0U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                        if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = 0U;
                        }
                        if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                            __Vdly__TB_I2C_MASTER__DOT__dut__DOT__bit_idx 
                                = ((0U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx))
                                    ? 7U : (7U & ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx) 
                                                  - (IData)(1U))));
                        }
                    } else {
                        if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = 1U;
                        }
                        if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe 
                                = (1U & (~ (((0U == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx))
                                              ? 0x34U
                                              : (0xffU 
                                                 & ((1U 
                                                     == (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx))
                                                     ? 
                                                    ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0) 
                                                     >> 8U)
                                                     : (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0)))) 
                                            >> (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx))));
                        }
                    }
                    if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state)))) {
                        if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out = 0U;
                            }
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                        if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                            if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = 0U;
                            }
                            if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                                __Vdly__TB_I2C_MASTER__DOT__dut__DOT__bit_idx = 7U;
                            }
                        } else {
                            if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = 1U;
                            }
                            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe 
                                = (1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick));
                        }
                        if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                                vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out = 0U;
                            }
                        }
                    } else {
                        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = 1U;
                        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe = 0U;
                        __Vdly__TB_I2C_MASTER__DOT__dut__DOT__bit_idx = 7U;
                    }
                    if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state)))) {
                        __Vdly__TB_I2C_MASTER__DOT__dut__DOT__byte_idx = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                        if ((1U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                            if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick))) {
                                if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick)))) {
                                    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__ack_bit 
                                        = vlSelf->TB_I2C_MASTER__DOT__i2c_sda;
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state)))) {
                            vlSelf->TB_I2C_MASTER__DOT__config_done = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                if ((2U & (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state)))) {
                        vlSelf->TB_I2C_MASTER__DOT__config_done = 1U;
                    }
                }
            }
            vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state 
                = vlSelf->TB_I2C_MASTER__DOT__dut__DOT__next_state;
        } else {
            __Vdly__TB_I2C_MASTER__DOT__dut__DOT__div_cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt)));
        }
    } else {
        __Vdly__TB_I2C_MASTER__DOT__dut__DOT__tick = 0U;
        __Vdly__TB_I2C_MASTER__DOT__dut__DOT__div_cnt = 0U;
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx = 0U;
        vlSelf->TB_I2C_MASTER__DOT__config_done = 0U;
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r = 1U;
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_out = 0U;
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__sda_oe = 0U;
        __Vdly__TB_I2C_MASTER__DOT__dut__DOT__bit_idx = 7U;
        __Vdly__TB_I2C_MASTER__DOT__dut__DOT__byte_idx = 0U;
        vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error = 0U;
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__ack_bit = 0U;
        vlSelf->TB_I2C_MASTER__DOT__dut__DOT__state = 0U;
    }
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__bit_idx = __Vdly__TB_I2C_MASTER__DOT__dut__DOT__bit_idx;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__byte_idx 
        = __Vdly__TB_I2C_MASTER__DOT__dut__DOT__byte_idx;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0 
        = ((8U >= (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx))
            ? vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_table
           [vlSelf->TB_I2C_MASTER__DOT__dut__DOT__reg_idx]
            : 0U);
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__tick = __Vdly__TB_I2C_MASTER__DOT__dut__DOT__tick;
    vlSelf->TB_I2C_MASTER__DOT__dut__DOT__div_cnt = __Vdly__TB_I2C_MASTER__DOT__dut__DOT__div_cnt;
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

void VTB_I2C_MASTER___024root___eval_nba(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_I2C_MASTER___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x3dULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_I2C_MASTER___024root___act_comb__TOP__0(vlSelf);
    }
}

void VTB_I2C_MASTER___024root___timing_resume(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf3421512__0.resume("@(posedge TB_I2C_MASTER.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8f9436ca__0.resume("@(negedge TB_I2C_MASTER.i2c_sda)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb9761e47__0.resume("@(posedge TB_I2C_MASTER.dut.scl_r)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb9761ffa__0.resume("@(negedge TB_I2C_MASTER.dut.scl_r)");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hbc03cf0a__0.resume("@([changed] TB_I2C_MASTER.rst_n)");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8b6a0606__0.resume("@([changed] (TB_I2C_MASTER.config_done | TB_I2C_MASTER.i2c_nack_error))");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTB_I2C_MASTER___024root___timing_commit(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf3421512__0.commit("@(posedge TB_I2C_MASTER.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8f9436ca__0.commit("@(negedge TB_I2C_MASTER.i2c_sda)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb9761e47__0.commit("@(posedge TB_I2C_MASTER.dut.scl_r)");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb9761ffa__0.commit("@(negedge TB_I2C_MASTER.dut.scl_r)");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hbc03cf0a__0.commit("@([changed] TB_I2C_MASTER.rst_n)");
    }
    if ((! (0x80ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8b6a0606__0.commit("@([changed] (TB_I2C_MASTER.config_done | TB_I2C_MASTER.i2c_nack_error))");
    }
}

void VTB_I2C_MASTER___024root___eval_triggers__act(VTB_I2C_MASTER___024root* vlSelf);

bool VTB_I2C_MASTER___024root___eval_phase__act(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTB_I2C_MASTER___024root___eval_triggers__act(vlSelf);
    VTB_I2C_MASTER___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTB_I2C_MASTER___024root___timing_resume(vlSelf);
        VTB_I2C_MASTER___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTB_I2C_MASTER___024root___eval_phase__nba(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTB_I2C_MASTER___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_I2C_MASTER___024root___dump_triggers__nba(VTB_I2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_I2C_MASTER___024root___dump_triggers__act(VTB_I2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_I2C_MASTER___024root___eval(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTB_I2C_MASTER___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/TB_I2C_MASTER.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTB_I2C_MASTER___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/TB_I2C_MASTER.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTB_I2C_MASTER___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTB_I2C_MASTER___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTB_I2C_MASTER___024root___eval_debug_assertions(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
