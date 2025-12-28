// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSingleCycleCPU__pch.h"

//============================================================
// Constructors

VSingleCycleCPU::VSingleCycleCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSingleCycleCPU__Syms(contextp(), _vcname__, this)}
    , Clk{vlSymsp->TOP.Clk}
    , Rst{vlSymsp->TOP.Rst}
    , PC_dbg{vlSymsp->TOP.PC_dbg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSingleCycleCPU::VSingleCycleCPU(const char* _vcname__)
    : VSingleCycleCPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSingleCycleCPU::~VSingleCycleCPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
void VSingleCycleCPU___024root___eval_static(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___eval_initial(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___eval_settle(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf);

void VSingleCycleCPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSingleCycleCPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSingleCycleCPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSingleCycleCPU___024root___eval_static(&(vlSymsp->TOP));
        VSingleCycleCPU___024root___eval_initial(&(vlSymsp->TOP));
        VSingleCycleCPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSingleCycleCPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSingleCycleCPU::eventsPending() { return false; }

uint64_t VSingleCycleCPU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSingleCycleCPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSingleCycleCPU___024root___eval_final(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU::final() {
    VSingleCycleCPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSingleCycleCPU::hierName() const { return vlSymsp->name(); }
const char* VSingleCycleCPU::modelName() const { return "VSingleCycleCPU"; }
unsigned VSingleCycleCPU::threads() const { return 1; }
void VSingleCycleCPU::prepareClone() const { contextp()->prepareClone(); }
void VSingleCycleCPU::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VSingleCycleCPU::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VSingleCycleCPU::trace()' called on model that was Verilated without --trace option");
}
