// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024ROOT_H_
#define VERILATED_VSINGLECYCLECPU___024ROOT_H_  // guard

#include "verilated.h"


class VSingleCycleCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSingleCycleCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(Clk,0,0);
    VL_IN8(Rst,0,0);
    CData/*0:0*/ SingleCycleCPU__DOT__Branch;
    CData/*0:0*/ SingleCycleCPU__DOT__MemtoReg;
    CData/*0:0*/ SingleCycleCPU__DOT__MemWrite;
    CData/*0:0*/ SingleCycleCPU__DOT__AluSrc;
    CData/*0:0*/ SingleCycleCPU__DOT__RegWrite;
    CData/*3:0*/ SingleCycleCPU__DOT__ALUCtrlSig;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Rst__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(PC_dbg,31,0);
    IData/*31:0*/ SingleCycleCPU__DOT__PC;
    IData/*31:0*/ SingleCycleCPU__DOT__PC_next;
    IData/*31:0*/ SingleCycleCPU__DOT__Instr;
    IData/*31:0*/ SingleCycleCPU__DOT__RegDout2;
    IData/*31:0*/ SingleCycleCPU__DOT__Imm;
    IData/*31:0*/ SingleCycleCPU__DOT__ALU_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> SingleCycleCPU__DOT__imem__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__rf__DOT__Rfile;
    VlUnpacked<IData/*31:0*/, 256> SingleCycleCPU__DOT__dmem__DOT__mem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024root();
    VL_UNCOPYABLE(VSingleCycleCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
