// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTB_I2C_MASTER.h for the primary calling header

#ifndef VERILATED_VTB_I2C_MASTER___024ROOT_H_
#define VERILATED_VTB_I2C_MASTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTB_I2C_MASTER__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTB_I2C_MASTER___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ TB_I2C_MASTER__DOT__clk;
    CData/*0:0*/ TB_I2C_MASTER__DOT__rst_n;
    CData/*0:0*/ TB_I2C_MASTER__DOT__i2c_sda;
    CData/*0:0*/ TB_I2C_MASTER__DOT__dut__DOT__scl_r;
    CData/*0:0*/ TB_I2C_MASTER__DOT__config_done;
    CData/*0:0*/ TB_I2C_MASTER__DOT__i2c_nack_error;
    CData/*0:0*/ TB_I2C_MASTER__DOT__slave_sda_drive_low;
    CData/*7:0*/ TB_I2C_MASTER__DOT__rx_byte;
    CData/*7:0*/ TB_I2C_MASTER__DOT____Vlvbound_h3f9a980f__0;
    CData/*6:0*/ TB_I2C_MASTER__DOT__dut__DOT__div_cnt;
    CData/*1:0*/ TB_I2C_MASTER__DOT__dut__DOT__tick;
    CData/*3:0*/ TB_I2C_MASTER__DOT__dut__DOT__state;
    CData/*3:0*/ TB_I2C_MASTER__DOT__dut__DOT__next_state;
    CData/*1:0*/ TB_I2C_MASTER__DOT__dut__DOT__byte_idx;
    CData/*2:0*/ TB_I2C_MASTER__DOT__dut__DOT__bit_idx;
    CData/*3:0*/ TB_I2C_MASTER__DOT__dut__DOT__reg_idx;
    CData/*0:0*/ TB_I2C_MASTER__DOT__dut__DOT__ack_bit;
    CData/*0:0*/ TB_I2C_MASTER__DOT__dut__DOT__sda_out;
    CData/*0:0*/ TB_I2C_MASTER__DOT__dut__DOT__sda_oe;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__i2c_sda__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__TB_I2C_MASTER__DOT__dut__DOT__scl_r__0;
    CData/*0:0*/ __Vtrigprevexpr_h1b5dd174__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ TB_I2C_MASTER__DOT__dut__DOT____VdfgTmp_h21de971b__0;
    IData/*31:0*/ TB_I2C_MASTER__DOT__transaction_count;
    IData/*31:0*/ TB_I2C_MASTER__DOT__error_count;
    IData/*31:0*/ TB_I2C_MASTER__DOT__slave_model__DOT__byte_index;
    IData/*31:0*/ TB_I2C_MASTER__DOT__slave_model__DOT__bit_index;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 9> TB_I2C_MASTER__DOT__expected_words;
    VlUnpacked<CData/*7:0*/, 3> TB_I2C_MASTER__DOT__rx_bytes;
    VlUnpacked<SData/*15:0*/, 9> TB_I2C_MASTER__DOT__dut__DOT__reg_table;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf3421512__0;
    VlTriggerScheduler __VtrigSched_h8f9436ca__0;
    VlTriggerScheduler __VtrigSched_hb9761e47__0;
    VlTriggerScheduler __VtrigSched_hb9761ffa__0;
    VlTriggerScheduler __VtrigSched_hbc03cf0a__0;
    VlTriggerScheduler __VtrigSched_h8b6a0606__0;
    VlForkSync __Vfork_1__sync;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<8> __VactTriggered;
    VlTriggerVec<8> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTB_I2C_MASTER__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTB_I2C_MASTER___024root(VTB_I2C_MASTER__Syms* symsp, const char* v__name);
    ~VTB_I2C_MASTER___024root();
    VL_UNCOPYABLE(VTB_I2C_MASTER___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
