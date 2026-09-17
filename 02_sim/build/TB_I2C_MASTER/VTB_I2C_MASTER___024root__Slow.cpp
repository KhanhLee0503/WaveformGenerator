// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_I2C_MASTER.h for the primary calling header

#include "VTB_I2C_MASTER__pch.h"
#include "VTB_I2C_MASTER__Syms.h"
#include "VTB_I2C_MASTER___024root.h"

void VTB_I2C_MASTER___024root___ctor_var_reset(VTB_I2C_MASTER___024root* vlSelf);

VTB_I2C_MASTER___024root::VTB_I2C_MASTER___024root(VTB_I2C_MASTER__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTB_I2C_MASTER___024root___ctor_var_reset(this);
}

void VTB_I2C_MASTER___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTB_I2C_MASTER___024root::~VTB_I2C_MASTER___024root() {
}
