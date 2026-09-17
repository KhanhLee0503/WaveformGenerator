// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_I2C_MASTER.h for the primary calling header

#include "VTB_I2C_MASTER__pch.h"
#include "VTB_I2C_MASTER__Syms.h"
#include "VTB_I2C_MASTER___024root.h"

VL_INLINE_OPT VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__2(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h8f9436ca__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge TB_I2C_MASTER.i2c_sda)", 
                                                           "../01_tb/TB_I2C_MASTER.sv", 
                                                           85);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r)) {
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = 0U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 7U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 6U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 6U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 5U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 5U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 4U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 4U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 3U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 3U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 2U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 2U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 1U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 1U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 0U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | (IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 0xffffffffU;
            vlSelf->TB_I2C_MASTER__DOT____Vlvbound_h3f9a980f__0 
                = vlSelf->TB_I2C_MASTER__DOT__rx_byte;
            vlSelf->TB_I2C_MASTER__DOT__rx_bytes[0U] 
                = vlSelf->TB_I2C_MASTER__DOT____Vlvbound_h3f9a980f__0;
            co_await vlSelf->__VtrigSched_hb9761ffa__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               100);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low = 1U;
            co_await vlSelf->__VtrigSched_hb9761ffa__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               104);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low = 0U;
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__byte_index = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = 0U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 7U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 6U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 6U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 5U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 5U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 4U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 4U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 3U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 3U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 2U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 2U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 1U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 1U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 0U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | (IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 0xffffffffU;
            vlSelf->TB_I2C_MASTER__DOT____Vlvbound_h3f9a980f__0 
                = vlSelf->TB_I2C_MASTER__DOT__rx_byte;
            vlSelf->TB_I2C_MASTER__DOT__rx_bytes[1U] 
                = vlSelf->TB_I2C_MASTER__DOT____Vlvbound_h3f9a980f__0;
            co_await vlSelf->__VtrigSched_hb9761ffa__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               100);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low = 1U;
            co_await vlSelf->__VtrigSched_hb9761ffa__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               104);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low = 0U;
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__byte_index = 2U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = 0U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 7U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 6U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 6U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 5U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 5U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 4U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 4U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 3U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 3U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 2U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 2U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 1U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | ((IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda) 
                                                      << 1U));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 0U;
            co_await vlSelf->__VtrigSched_hb9761e47__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               93);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__rx_byte = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->TB_I2C_MASTER__DOT__rx_byte)) 
                                                   | (IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda));
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__bit_index = 0xffffffffU;
            vlSelf->TB_I2C_MASTER__DOT____Vlvbound_h3f9a980f__0 
                = vlSelf->TB_I2C_MASTER__DOT__rx_byte;
            vlSelf->TB_I2C_MASTER__DOT__rx_bytes[2U] 
                = vlSelf->TB_I2C_MASTER__DOT____Vlvbound_h3f9a980f__0;
            co_await vlSelf->__VtrigSched_hb9761ffa__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               100);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low = 1U;
            co_await vlSelf->__VtrigSched_hb9761ffa__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge TB_I2C_MASTER.dut.scl_r)", 
                                                               "../01_tb/TB_I2C_MASTER.sv", 
                                                               104);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->TB_I2C_MASTER__DOT__slave_sda_drive_low = 0U;
            vlSelf->TB_I2C_MASTER__DOT__slave_model__DOT__byte_index = 3U;
            VL_WRITEF("[%0t] Transaction %0d: address=%02x, word=%02x%02x\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      32,vlSelf->TB_I2C_MASTER__DOT__transaction_count,
                      8,vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                      [0U],8,vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                      [1U],8,vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                      [2U]);
            if (VL_UNLIKELY((0x34U != vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                             [0U]))) {
                VL_WRITEF("[%0t] %%Error: TB_I2C_MASTER.sv:117: Assertion failed in %NTB_I2C_MASTER.slave_model: Sai address byte: expected=34, actual=%02x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),8,vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                          [0U]);
                VL_STOP_MT("../01_tb/TB_I2C_MASTER.sv", 117, "");
                vlSelf->TB_I2C_MASTER__DOT__error_count 
                    = ((IData)(1U) + vlSelf->TB_I2C_MASTER__DOT__error_count);
            }
            if (VL_UNLIKELY(VL_LTES_III(32, 9U, vlSelf->TB_I2C_MASTER__DOT__transaction_count))) {
                VL_WRITEF("[%0t] %%Error: TB_I2C_MASTER.sv:122: Assertion failed in %NTB_I2C_MASTER.slave_model: DUT ph\303\241t nhi\341\273\201u h\306\241n 9 transaction\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("../01_tb/TB_I2C_MASTER.sv", 122, "");
                vlSelf->TB_I2C_MASTER__DOT__error_count 
                    = ((IData)(1U) + vlSelf->TB_I2C_MASTER__DOT__error_count);
            } else if (VL_UNLIKELY((((vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                                      [1U] << 8U) | 
                                     vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                                     [2U]) != ((8U 
                                                >= 
                                                (0xfU 
                                                 & vlSelf->TB_I2C_MASTER__DOT__transaction_count))
                                                ? vlSelf->TB_I2C_MASTER__DOT__expected_words
                                               [(0xfU 
                                                 & vlSelf->TB_I2C_MASTER__DOT__transaction_count)]
                                                : 0U)))) {
                VL_WRITEF("[%0t] %%Error: TB_I2C_MASTER.sv:126: Assertion failed in %NTB_I2C_MASTER.slave_model: Sai control word[%0d]: expected=%04x, actual=%02x%02x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TB_I2C_MASTER__DOT__transaction_count,
                          16,((8U >= (0xfU & vlSelf->TB_I2C_MASTER__DOT__transaction_count))
                               ? vlSelf->TB_I2C_MASTER__DOT__expected_words
                              [(0xfU & vlSelf->TB_I2C_MASTER__DOT__transaction_count)]
                               : 0U),8,vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                          [1U],8,vlSelf->TB_I2C_MASTER__DOT__rx_bytes
                          [2U]);
                VL_STOP_MT("../01_tb/TB_I2C_MASTER.sv", 126, "");
                vlSelf->TB_I2C_MASTER__DOT__error_count 
                    = ((IData)(1U) + vlSelf->TB_I2C_MASTER__DOT__error_count);
            }
            vlSelf->TB_I2C_MASTER__DOT__transaction_count 
                = ((IData)(1U) + vlSelf->TB_I2C_MASTER__DOT__transaction_count);
        }
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3____Vfork_1__1(VTB_I2C_MASTER___024root* vlSelf, VlProcessRef vlProcess) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3____Vfork_1__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x2540be400ULL, 
                                       vlProcess, "../01_tb/TB_I2C_MASTER.sv", 
                                       181);
    VL_WRITEF("[%0t] %%Fatal: TB_I2C_MASTER.sv:182: Assertion failed in %NTB_I2C_MASTER.testcase_ack_all.timeout_guard: TEST ACK_ALL: TIMEOUT\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("../01_tb/TB_I2C_MASTER.sv", 182, "");
    vlSelf->__Vfork_1__sync.done("../01_tb/TB_I2C_MASTER.sv", 
                                 179);
    vlProcess->state(VlProcess::FINISHED);
}

VL_INLINE_OPT VlCoroutine VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(VTB_I2C_MASTER___024root* vlSelf, VlProcessRef vlProcess) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0\n"); );
    // Body
    while ((1U & (~ ((IData)(vlSelf->TB_I2C_MASTER__DOT__config_done) 
                     | (IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error))))) {
        co_await vlSelf->__VtrigSched_h8b6a0606__0.trigger(1U, 
                                                           vlProcess, 
                                                           "@([changed] (TB_I2C_MASTER.config_done | TB_I2C_MASTER.i2c_nack_error))", 
                                                           "../01_tb/TB_I2C_MASTER.sv", 
                                                           145);
    }
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       vlProcess, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       148);
    co_await vlSelf->__VtrigSched_hf3421512__0.trigger(0U, 
                                                       vlProcess, 
                                                       "@(posedge TB_I2C_MASTER.clk)", 
                                                       "../01_tb/TB_I2C_MASTER.sv", 
                                                       149);
    if (VL_UNLIKELY(vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error)) {
        VL_WRITEF("[%0t] %%Error: TB_I2C_MASTER.sv:152: Assertion failed in %NTB_I2C_MASTER.testcase_ack_all.wait_for_completion: DUT b\303\241o NACK d\303\271 slave lu\303\264n tr\341\272\243 ACK\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/TB_I2C_MASTER.sv", 152, "");
        vlSelf->TB_I2C_MASTER__DOT__error_count = ((IData)(1U) 
                                                   + vlSelf->TB_I2C_MASTER__DOT__error_count);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_I2C_MASTER__DOT__config_done))))) {
        VL_WRITEF("[%0t] %%Error: TB_I2C_MASTER.sv:157: Assertion failed in %NTB_I2C_MASTER.testcase_ack_all.wait_for_completion: config_done kh\303\264ng \304\221\306\260\341\273\243c assert\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/TB_I2C_MASTER.sv", 157, "");
        vlSelf->TB_I2C_MASTER__DOT__error_count = ((IData)(1U) 
                                                   + vlSelf->TB_I2C_MASTER__DOT__error_count);
    }
    if (VL_UNLIKELY((9U != vlSelf->TB_I2C_MASTER__DOT__transaction_count))) {
        VL_WRITEF("[%0t] %%Error: TB_I2C_MASTER.sv:162: Assertion failed in %NTB_I2C_MASTER.testcase_ack_all.wait_for_completion: Sai s\341\273\221 transaction: expected=9, actual=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->TB_I2C_MASTER__DOT__transaction_count);
        VL_STOP_MT("../01_tb/TB_I2C_MASTER.sv", 162, "");
        vlSelf->TB_I2C_MASTER__DOT__error_count = ((IData)(1U) 
                                                   + vlSelf->TB_I2C_MASTER__DOT__error_count);
    }
    if (VL_LIKELY((0U == vlSelf->TB_I2C_MASTER__DOT__error_count))) {
        VL_WRITEF("====================================================\nTEST ACK_ALL: PASS\n\304\220\303\243 nh\341\272\255n \304\221\303\272ng 9 transaction v\303\240 config_done=1\n====================================================\n");
    } else {
        VL_WRITEF("[%0t] %%Fatal: TB_I2C_MASTER.sv:173: Assertion failed in %NTB_I2C_MASTER.testcase_ack_all.wait_for_completion: TEST ACK_ALL: FAIL - c\303\263 %0d l\341\273\227i\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->TB_I2C_MASTER__DOT__error_count);
        VL_STOP_MT("../01_tb/TB_I2C_MASTER.sv", 173, "");
    }
    VL_FINISH_MT("../01_tb/TB_I2C_MASTER.sv", 176, "");
    vlSelf->__Vfork_1__sync.done("../01_tb/TB_I2C_MASTER.sv", 
                                 144);
    vlProcess->state(VlProcess::FINISHED);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_I2C_MASTER___024root___dump_triggers__act(VTB_I2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_I2C_MASTER___024root___eval_triggers__act(VTB_I2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_I2C_MASTER___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h1b5dd174__0;
    __Vtrigcurrexpr_h1b5dd174__0 = 0;
    __Vtrigcurrexpr_h1b5dd174__0 = ((IData)(vlSelf->TB_I2C_MASTER__DOT__config_done) 
                                    | (IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_nack_error));
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->TB_I2C_MASTER__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->TB_I2C_MASTER__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->TB_I2C_MASTER__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__clk__0))));
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->TB_I2C_MASTER__DOT__i2c_sda)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__i2c_sda__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__dut__DOT__scl_r__0))));
    vlSelf->__VactTriggered.set(5U, ((~ (IData)(vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__dut__DOT__scl_r__0)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->TB_I2C_MASTER__DOT__rst_n) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__rst_n__0)));
    vlSelf->__VactTriggered.set(7U, ((IData)(__Vtrigcurrexpr_h1b5dd174__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h1b5dd174__0)));
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__clk__0 
        = vlSelf->TB_I2C_MASTER__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__rst_n__0 
        = vlSelf->TB_I2C_MASTER__DOT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__i2c_sda__0 
        = vlSelf->TB_I2C_MASTER__DOT__i2c_sda;
    vlSelf->__Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__dut__DOT__scl_r__0 
        = vlSelf->TB_I2C_MASTER__DOT__dut__DOT__scl_r;
    vlSelf->__Vtrigprevexpr_h1b5dd174__0 = __Vtrigcurrexpr_h1b5dd174__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_I2C_MASTER___024root___dump_triggers__act(vlSelf);
    }
#endif
}
