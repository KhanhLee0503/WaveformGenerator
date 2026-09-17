// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VI2C_MASTER__pch.h"

//============================================================
// Constructors

VI2C_MASTER::VI2C_MASTER(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VI2C_MASTER__Syms(contextp(), _vcname__, this)}
    , I_CLK{vlSymsp->TOP.I_CLK}
    , I_RST_N{vlSymsp->TOP.I_RST_N}
    , IO_I2C_SCL{vlSymsp->TOP.IO_I2C_SCL}
    , IO_I2C_SDA{vlSymsp->TOP.IO_I2C_SDA}
    , O_CONFIG_DONE{vlSymsp->TOP.O_CONFIG_DONE}
    , O_I2C_NACK_ERROR{vlSymsp->TOP.O_I2C_NACK_ERROR}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VI2C_MASTER::VI2C_MASTER(const char* _vcname__)
    : VI2C_MASTER(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VI2C_MASTER::~VI2C_MASTER() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VI2C_MASTER___024root___eval_debug_assertions(VI2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG
void VI2C_MASTER___024root___eval_static(VI2C_MASTER___024root* vlSelf);
void VI2C_MASTER___024root___eval_initial(VI2C_MASTER___024root* vlSelf);
void VI2C_MASTER___024root___eval_settle(VI2C_MASTER___024root* vlSelf);
void VI2C_MASTER___024root___eval(VI2C_MASTER___024root* vlSelf);

void VI2C_MASTER::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VI2C_MASTER::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VI2C_MASTER___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VI2C_MASTER___024root___eval_static(&(vlSymsp->TOP));
        VI2C_MASTER___024root___eval_initial(&(vlSymsp->TOP));
        VI2C_MASTER___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VI2C_MASTER___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VI2C_MASTER::eventsPending() { return false; }

uint64_t VI2C_MASTER::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VI2C_MASTER::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VI2C_MASTER___024root___eval_final(VI2C_MASTER___024root* vlSelf);

VL_ATTR_COLD void VI2C_MASTER::final() {
    VI2C_MASTER___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VI2C_MASTER::hierName() const { return vlSymsp->name(); }
const char* VI2C_MASTER::modelName() const { return "VI2C_MASTER"; }
unsigned VI2C_MASTER::threads() const { return 1; }
void VI2C_MASTER::prepareClone() const { contextp()->prepareClone(); }
void VI2C_MASTER::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VI2C_MASTER::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VI2C_MASTER::trace()' called on model that was Verilated without --trace option");
}
