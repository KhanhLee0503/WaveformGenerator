// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHASE_ACCUMULATOR_TB.h for the primary calling header

#include "VPHASE_ACCUMULATOR_TB__pch.h"
#include "VPHASE_ACCUMULATOR_TB__Syms.h"
#include "VPHASE_ACCUMULATOR_TB___024root.h"

VL_INLINE_OPT VlCoroutine VPHASE_ACCUMULATOR_TB___024root___eval_initial__TOP__Vtiming__0(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected = 0;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected = 0;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__test_name;
    IData/*31:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name;
    CData/*0:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__test_name;
    CData/*0:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__test_name;
    CData/*0:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__test_name;
    CData/*0:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__test_name;
    CData/*0:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__test_name;
    CData/*0:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__test_name;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0xda741U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x525f5442U;
    __Vtemp_1[2U] = 0x4c41544fU;
    __Vtemp_1[3U] = 0x43554d55U;
    __Vtemp_1[4U] = 0x455f4143U;
    __Vtemp_1[5U] = 0x50484153U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("\nTEST 1: Sample enable and hold\n");
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__test_name = 
        std::string{"Asynchronous active-low reset"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__expected = 0U;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__2__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__test_name = 
        std::string{"Counter remains zero after reset release"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected = 0U;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__test_name));
    }
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected = 0U;
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0xda741U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected 
        = ((IData)(0xda741U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name = 
        std::string{"Counter accumulates FTW when enabled"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected 
        = ((IData)(0xda741U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name = 
        std::string{"Counter accumulates FTW when enabled"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected 
        = ((IData)(0xda741U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name = 
        std::string{"Counter accumulates FTW when enabled"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected 
        = ((IData)(0xda741U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name = 
        std::string{"Counter accumulates FTW when enabled"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__4__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = 0U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name = 
        std::string{"Counter holds when sample enable is low"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name = 
        std::string{"Counter holds when sample enable is low"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name = 
        std::string{"Counter holds when sample enable is low"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_enable_and_hold__0__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__5__test_name));
    }
    VL_WRITEF("\nTEST 2: Synchronous clear and priority\n");
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__test_name = 
        std::string{"Asynchronous active-low reset"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__expected = 0U;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__8__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__test_name = 
        std::string{"Counter remains zero after reset release"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__expected = 0U;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__9__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0x1234567U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__test_name = 
        std::string{"Clear has priority over accumulation"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__expected = 0U;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__10__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR = 0U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       114);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__test_name = 
        std::string{"Accumulation resumes after clear"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__expected = 0x1234567U;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__11__test_name));
    }
    VL_WRITEF("\nTEST 3: Natural modulo wrap-around\n");
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_CLEAR = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__test_name = 
        std::string{"Asynchronous active-low reset"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__expected = 0U;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__14__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__test_name = 
        std::string{"Counter remains zero after reset release"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__expected = 0U;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__15__test_name));
    }
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected = 0U;
    co_await vlSelf->__VtrigSched_hcf53ce3e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0x35555555U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_SAMPLE_EN = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected 
        = ((IData)(0x35555555U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name = 
        std::string{"Counter wraps at configured width"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected 
        = ((IData)(0x35555555U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name = 
        std::string{"Counter wraps at configured width"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected 
        = ((IData)(0x35555555U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name = 
        std::string{"Counter wraps at configured width"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected 
        = ((IData)(0x35555555U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name = 
        std::string{"Counter wraps at configured width"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected 
        = ((IData)(0x35555555U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name = 
        std::string{"Counter wraps at configured width"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name));
    }
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       130);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected 
        = ((IData)(0x35555555U) + __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name = 
        std::string{"Counter wraps at configured width"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__test_counter_wrap__12__expected;
    if (VL_UNLIKELY((vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter 
                     != __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:36: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=0x%08x, expected=0x%08x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter,
                  32,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 36, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__16__test_name));
    }
    VL_WRITEF("\nTEST 4: FTW range checking\n");
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0xda740U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__test_name = 
        std::string{"FTW below minimum is rejected"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__expected = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR) 
                     != (IData)(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__expected)))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:49: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_range_error: FAIL: %@, range_error=%0b, expected=%0b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__test_name),
                  1,(IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR),
                  1,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 49, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__18__test_name));
    }
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0xda741U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__test_name = 
        std::string{"Minimum FTW is accepted"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__expected = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR) 
                     != (IData)(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__expected)))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:49: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_range_error: FAIL: %@, range_error=%0b, expected=%0b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__test_name),
                  1,(IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR),
                  1,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 49, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__19__test_name));
    }
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0xda742U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__test_name = 
        std::string{"FTW inside range is accepted"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__expected = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR) 
                     != (IData)(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__expected)))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:49: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_range_error: FAIL: %@, range_error=%0b, expected=%0b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__test_name),
                  1,(IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR),
                  1,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 49, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__20__test_name));
    }
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0x35555554U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__test_name = 
        std::string{"FTW below maximum is accepted"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__expected = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR) 
                     != (IData)(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__expected)))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:49: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_range_error: FAIL: %@, range_error=%0b, expected=%0b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__test_name),
                  1,(IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR),
                  1,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 49, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__21__test_name));
    }
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0x35555555U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__test_name = 
        std::string{"Maximum FTW is accepted"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__expected = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR) 
                     != (IData)(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__expected)))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:49: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_range_error: FAIL: %@, range_error=%0b, expected=%0b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__test_name),
                  1,(IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR),
                  1,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 49, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__22__test_name));
    }
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_PHASE_FTW = 0x35555556U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__test_name = 
        std::string{"FTW above maximum is rejected"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__expected = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR) 
                     != (IData)(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__expected)))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:49: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_range_error: FAIL: %@, range_error=%0b, expected=%0b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__test_name),
                  1,(IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__O_PHASE_FREQ_RANGE_ERROR),
                  1,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 49, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_range_error__23__test_name));
    }
    if (VL_LIKELY((0U == vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count))) {
        VL_WRITEF("\nALL TESTS PASSED\n");
    } else {
        VL_WRITEF("[%0t] %%Fatal: PHASE_ACCUMULATOR_TB.sv:172: Assertion failed in %NPHASE_ACCUMULATOR_TB: \nTEST FAILED: %0d error(s)\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 172, "");
    }
    VL_FINISH_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 173, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHASE_ACCUMULATOR_TB___024root___dump_triggers__act(VPHASE_ACCUMULATOR_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VPHASE_ACCUMULATOR_TB___024root___eval_triggers__act(VPHASE_ACCUMULATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHASE_ACCUMULATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHASE_ACCUMULATOR_TB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_RESET_N__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0))));
    vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0 
        = vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_RESET_N__0 
        = vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPHASE_ACCUMULATOR_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
