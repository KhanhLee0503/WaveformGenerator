// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTB_I2C_MASTER__pch.h"
#include "VTB_I2C_MASTER.h"
#include "VTB_I2C_MASTER___024root.h"

// FUNCTIONS
VTB_I2C_MASTER__Syms::~VTB_I2C_MASTER__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void VTB_I2C_MASTER__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VTB_I2C_MASTER__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VTB_I2C_MASTER__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

VTB_I2C_MASTER__Syms::VTB_I2C_MASTER__Syms(VerilatedContext* contextp, const char* namep, VTB_I2C_MASTER* modelp)
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
    __Vscope_TB_I2C_MASTER.configure(this, name(), "TB_I2C_MASTER", "TB_I2C_MASTER", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TB_I2C_MASTER__slave_model.configure(this, name(), "TB_I2C_MASTER.slave_model", "slave_model", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TB_I2C_MASTER__testcase_ack_all__timeout_guard.configure(this, name(), "TB_I2C_MASTER.testcase_ack_all.timeout_guard", "timeout_guard", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TB_I2C_MASTER__testcase_ack_all__wait_for_completion.configure(this, name(), "TB_I2C_MASTER.testcase_ack_all.wait_for_completion", "wait_for_completion", -9, VerilatedScope::SCOPE_OTHER);
}
