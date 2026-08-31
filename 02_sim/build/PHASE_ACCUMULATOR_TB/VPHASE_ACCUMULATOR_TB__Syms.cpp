// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPHASE_ACCUMULATOR_TB__pch.h"
#include "VPHASE_ACCUMULATOR_TB.h"
#include "VPHASE_ACCUMULATOR_TB___024root.h"

// FUNCTIONS
VPHASE_ACCUMULATOR_TB__Syms::~VPHASE_ACCUMULATOR_TB__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void VPHASE_ACCUMULATOR_TB__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VPHASE_ACCUMULATOR_TB__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VPHASE_ACCUMULATOR_TB__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

VPHASE_ACCUMULATOR_TB__Syms::VPHASE_ACCUMULATOR_TB__Syms(VerilatedContext* contextp, const char* namep, VPHASE_ACCUMULATOR_TB* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_PHASE_ACCUMULATOR_TB.configure(this, name(), "PHASE_ACCUMULATOR_TB", "PHASE_ACCUMULATOR_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_PHASE_ACCUMULATOR_TB__check_counter.configure(this, name(), "PHASE_ACCUMULATOR_TB.check_counter", "check_counter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_PHASE_ACCUMULATOR_TB__check_state.configure(this, name(), "PHASE_ACCUMULATOR_TB.check_state", "check_state", -9, VerilatedScope::SCOPE_OTHER);
}
