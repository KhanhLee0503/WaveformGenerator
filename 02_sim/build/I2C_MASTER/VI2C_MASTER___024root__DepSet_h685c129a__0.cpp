// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VI2C_MASTER.h for the primary calling header

#include "VI2C_MASTER__pch.h"
#include "VI2C_MASTER__Syms.h"
#include "VI2C_MASTER___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VI2C_MASTER___024root___dump_triggers__act(VI2C_MASTER___024root* vlSelf);
#endif  // VL_DEBUG

void VI2C_MASTER___024root___eval_triggers__act(VI2C_MASTER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VI2C_MASTER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI2C_MASTER___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->I_RST_N)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__I_RST_N__0))));
    vlSelf->__Vtrigprevexpr___TOP__I_CLK__0 = vlSelf->I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__I_RST_N__0 = vlSelf->I_RST_N;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VI2C_MASTER___024root___dump_triggers__act(vlSelf);
    }
#endif
}
