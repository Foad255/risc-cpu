// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU__Syms.h"
#include "VSingleCycleCPU___024unit.h"

void VSingleCycleCPU___024unit___ctor_var_reset(VSingleCycleCPU___024unit* vlSelf);

VSingleCycleCPU___024unit::VSingleCycleCPU___024unit(VSingleCycleCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSingleCycleCPU___024unit___ctor_var_reset(this);
}

void VSingleCycleCPU___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSingleCycleCPU___024unit::~VSingleCycleCPU___024unit() {
}
