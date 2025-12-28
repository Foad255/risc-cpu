// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSINGLECYCLECPU__SYMS_H_
#define VERILATED_VSINGLECYCLECPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSingleCycleCPU.h"

// INCLUDE MODULE CLASSES
#include "VSingleCycleCPU___024root.h"
#include "VSingleCycleCPU___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSingleCycleCPU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSingleCycleCPU* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSingleCycleCPU___024root      TOP;

    // CONSTRUCTORS
    VSingleCycleCPU__Syms(VerilatedContext* contextp, const char* namep, VSingleCycleCPU* modelp);
    ~VSingleCycleCPU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
