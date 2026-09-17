// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VI2C_MASTER__SYMS_H_
#define VERILATED_VI2C_MASTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VI2C_MASTER.h"

// INCLUDE MODULE CLASSES
#include "VI2C_MASTER___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VI2C_MASTER__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VI2C_MASTER* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VI2C_MASTER___024root          TOP;

    // CONSTRUCTORS
    VI2C_MASTER__Syms(VerilatedContext* contextp, const char* namep, VI2C_MASTER* modelp);
    ~VI2C_MASTER__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
