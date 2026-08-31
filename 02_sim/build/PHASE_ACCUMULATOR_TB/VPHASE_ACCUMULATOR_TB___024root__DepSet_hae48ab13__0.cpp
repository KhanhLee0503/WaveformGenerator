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
    IData/*31:0*/ PHASE_ACCUMULATOR_TB__DOT____Vrepeat6;
    PHASE_ACCUMULATOR_TB__DOT____Vrepeat6 = 0;
    CData/*3:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__test_name;
    SData/*14:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected = 0;
    std::string __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__test_name;
    CData/*1:0*/ __Vtask_PHASE_ACCUMULATOR_TB__DOT__select_wave__6__wave_type;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__select_wave__6__wave_type = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_WAVE_TYPE = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_START = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_FREQ_DELTA = 0x1388U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x525f5442U;
    __Vtemp_1[2U] = 0x4c41544fU;
    __Vtemp_1[3U] = 0x43554d55U;
    __Vtemp_1[4U] = 0x455f4143U;
    __Vtemp_1[5U] = 0x50484153U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("\nTEST 1: Reset\n");
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_START = 0U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__test_name = 
        std::string{"State after reset"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__expected = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_current_state) 
                     != (IData)(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__expected)))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:48: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_state: FAIL: %@, state=%0#, expected=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__test_name),
                  4,(IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_current_state),
                  4,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 48, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_state__2__test_name));
    }
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__test_name = 
        std::string{"Counter after reset"};
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter) 
                     != (IData)(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected)))) {
        VL_WRITEF("[%0t] %%Error: PHASE_ACCUMULATOR_TB.sv:63: Assertion failed in %NPHASE_ACCUMULATOR_TB.check_counter: FAIL: %@, counter=%0#, expected=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__test_name),
                  15,(IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__dut__DOT__r_phase_counter),
                  15,__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__expected);
        VL_STOP_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 63, "");
        vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count 
            = ((IData)(1U) + vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_PHASE_ACCUMULATOR_TB__DOT__check_counter__3__test_name));
    }
    VL_WRITEF("PASS: Underflow is asserted at zero\n");
    VL_WRITEF("\nTEST 6: Change triangle to sine while counting down\n");
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 0U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_START = 0U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_RESET_N = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_PHASE_ACCUMULATOR_TB__DOT__select_wave__6__wave_type = 2U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_WAVE_TYPE 
        = __Vtask_PHASE_ACCUMULATOR_TB__DOT__select_wave__6__wave_type;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_START = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_START = 0U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       226);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       227);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       229);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       230);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_WAVE_TYPE = 0U;
    PHASE_ACCUMULATOR_TB__DOT____Vrepeat6 = 0x64U;
    while (VL_LTS_III(32, 0U, PHASE_ACCUMULATOR_TB__DOT____Vrepeat6)) {
        co_await vlSelf->__VtrigSched_hcf53cd7b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge PHASE_ACCUMULATOR_TB.I_CLK)", 
                                                           "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                                           235);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        PHASE_ACCUMULATOR_TB__DOT____Vrepeat6 = (PHASE_ACCUMULATOR_TB__DOT____Vrepeat6 
                                                 - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/PHASE_ACCUMULATOR_TB.sv", 
                                       236);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U == vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count)) {
        VL_WRITEF("\nALL TESTS PASSED\n");
    } else {
        VL_WRITEF("\nTEST FAILED: %0d error(s)\n",32,
                  vlSelf->PHASE_ACCUMULATOR_TB__DOT__error_count);
    }
    VL_FINISH_MT("../01_tb/PHASE_ACCUMULATOR_TB.sv", 264, "");
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
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->PHASE_ACCUMULATOR_TB__DOT__I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__PHASE_ACCUMULATOR_TB__DOT__I_CLK__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
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
