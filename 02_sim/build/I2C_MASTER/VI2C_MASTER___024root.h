// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VI2C_MASTER.h for the primary calling header

#ifndef VERILATED_VI2C_MASTER___024ROOT_H_
#define VERILATED_VI2C_MASTER___024ROOT_H_  // guard

#include "verilated.h"


class VI2C_MASTER__Syms;

class alignas(VL_CACHE_LINE_BYTES) VI2C_MASTER___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(I_CLK,0,0);
    VL_IN8(I_RST_N,0,0);
    VL_INOUT8(IO_I2C_SCL,0,0);
    VL_INOUT8(IO_I2C_SDA,0,0);
    VL_OUT8(O_CONFIG_DONE,0,0);
    VL_OUT8(O_I2C_NACK_ERROR,0,0);
    CData/*6:0*/ I2C_MASTER__DOT__r_div_cnt;
    CData/*1:0*/ I2C_MASTER__DOT__r_tick;
    CData/*1:0*/ I2C_MASTER__DOT__r_byte_idx;
    CData/*2:0*/ I2C_MASTER__DOT__r_bit_idx;
    CData/*3:0*/ I2C_MASTER__DOT__r_reg_idx;
    CData/*0:0*/ I2C_MASTER__DOT__r_ack_bit;
    CData/*0:0*/ I2C_MASTER__DOT__r_sda_release;
    CData/*0:0*/ I2C_MASTER__DOT__r_scl_release;
    CData/*3:0*/ I2C_MASTER__DOT__r_state;
    CData/*3:0*/ I2C_MASTER__DOT__w_next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__I_CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__I_RST_N__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ I2C_MASTER__DOT____VdfgTmp_h6b98dace__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 9> I2C_MASTER__DOT__r_reg_table;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VI2C_MASTER__Syms* const vlSymsp;

    // CONSTRUCTORS
    VI2C_MASTER___024root(VI2C_MASTER__Syms* symsp, const char* v__name);
    ~VI2C_MASTER___024root();
    VL_UNCOPYABLE(VI2C_MASTER___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
