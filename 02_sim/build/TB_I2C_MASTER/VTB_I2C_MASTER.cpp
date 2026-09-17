// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTB_I2C_MASTER__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTB_I2C_MASTER::VTB_I2C_MASTER(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTB_I2C_MASTER__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTB_I2C_MASTER::VTB_I2C_MASTER(const char* _vcname__)
    : VTB_I2C_MASTER(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTB_I2C_MASTER::~VTB_I2C_MASTER() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTB_I2C_MASTER___024root___eval_debug_assertions(VTB_I2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG
void VTB_I2C_MASTER___024root___eval_static(VTB_I2C_MASTER___024root* vlSelf);
void VTB_I2C_MASTER___024root___eval_initial(VTB_I2C_MASTER___024root* vlSelf);
void VTB_I2C_MASTER___024root___eval_settle(VTB_I2C_MASTER___024root* vlSelf);
void VTB_I2C_MASTER___024root___eval(VTB_I2C_MASTER___024root* vlSelf);

void VTB_I2C_MASTER::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTB_I2C_MASTER::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTB_I2C_MASTER___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTB_I2C_MASTER___024root___eval_static(&(vlSymsp->TOP));
        VTB_I2C_MASTER___024root___eval_initial(&(vlSymsp->TOP));
        VTB_I2C_MASTER___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTB_I2C_MASTER___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VTB_I2C_MASTER::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VTB_I2C_MASTER::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VTB_I2C_MASTER::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VTB_I2C_MASTER::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VTB_I2C_MASTER::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTB_I2C_MASTER___024root___eval_final(VTB_I2C_MASTER___024root* vlSelf);

VL_ATTR_COLD void VTB_I2C_MASTER::final() {
    VTB_I2C_MASTER___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTB_I2C_MASTER::hierName() const { return vlSymsp->name(); }
const char* VTB_I2C_MASTER::modelName() const { return "VTB_I2C_MASTER"; }
unsigned VTB_I2C_MASTER::threads() const { return 1; }
void VTB_I2C_MASTER::prepareClone() const { contextp()->prepareClone(); }
void VTB_I2C_MASTER::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTB_I2C_MASTER::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTB_I2C_MASTER___024root__trace_decl_types(VerilatedVcd* tracep);

void VTB_I2C_MASTER___024root__trace_init_top(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTB_I2C_MASTER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_I2C_MASTER___024root*>(voidSelf);
    VTB_I2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTB_I2C_MASTER___024root__trace_decl_types(tracep);
    VTB_I2C_MASTER___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_I2C_MASTER___024root__trace_register(VTB_I2C_MASTER___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTB_I2C_MASTER::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTB_I2C_MASTER::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTB_I2C_MASTER___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
