// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024UNIT_H_
#define VERILATED_VSINGLECYCLECPU___024UNIT_H_  // guard

#include "verilated.h"


class VSingleCycleCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSingleCycleCPU___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024unit(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024unit();
    VL_UNCOPYABLE(VSingleCycleCPU___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
