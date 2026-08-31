// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHASE_ACCUMULATOR_TB.h for the primary calling header

#include "VPHASE_ACCUMULATOR_TB__pch.h"
#include "VPHASE_ACCUMULATOR_TB__Syms.h"
#include "VPHASE_ACCUMULATOR_TB___024root.h"

void VPHASE_ACCUMULATOR_TB___024root___ctor_var_reset(VPHASE_ACCUMULATOR_TB___024root* vlSelf);

VPHASE_ACCUMULATOR_TB___024root::VPHASE_ACCUMULATOR_TB___024root(VPHASE_ACCUMULATOR_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPHASE_ACCUMULATOR_TB___024root___ctor_var_reset(this);
}

void VPHASE_ACCUMULATOR_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPHASE_ACCUMULATOR_TB___024root::~VPHASE_ACCUMULATOR_TB___024root() {
}
