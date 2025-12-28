// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU__Syms.h"
#include "VSingleCycleCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->Clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Clk__0))) 
                                     | ((IData)(vlSelf->Rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Rst__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->Clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__Clk__0 = vlSelf->Clk;
    vlSelf->__Vtrigprevexpr___TOP__Rst__0 = vlSelf->Rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
