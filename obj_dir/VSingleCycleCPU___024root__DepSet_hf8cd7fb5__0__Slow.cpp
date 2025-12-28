// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU___024root.h"

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_static(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial\n"); );
    // Body
    VSingleCycleCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Clk__0 = vlSelf->Clk;
    vlSelf->__Vtrigprevexpr___TOP__Rst__0 = vlSelf->Rst;
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ SingleCycleCPU__DOT__imem__DOT__unnamedblk1__DOT__i;
    SingleCycleCPU__DOT__imem__DOT__unnamedblk1__DOT__i = 0;
    // Body
    SingleCycleCPU__DOT__imem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, SingleCycleCPU__DOT__imem__DOT__unnamedblk1__DOT__i)) {
        vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[(0xffU 
                                                      & SingleCycleCPU__DOT__imem__DOT__unnamedblk1__DOT__i)] = 0x13U;
        SingleCycleCPU__DOT__imem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + SingleCycleCPU__DOT__imem__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[0U] = 0x93U;
    vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[1U] = 0x113U;
    vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[2U] = 0x600193U;
    vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[3U] = 0x2080b3U;
    vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[4U] = 0x110113U;
    vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[5U] = 0x310663U;
    vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[6U] = 0xfe000ae3U;
    vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[7U] = 0x13U;
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_final(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSingleCycleCPU___024root___eval_phase__stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_settle(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSingleCycleCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SingleCycleCPU.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSingleCycleCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h69954461_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h75b8279d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h4608f605_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h3cf07ec7_0;

VL_ATTR_COLD void VSingleCycleCPU___024root___stl_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ SingleCycleCPU__DOT__AluOp;
    SingleCycleCPU__DOT__AluOp = 0;
    IData/*31:0*/ SingleCycleCPU__DOT__RegDout1;
    SingleCycleCPU__DOT__RegDout1 = 0;
    IData/*31:0*/ SingleCycleCPU__DOT__ALU_in2;
    SingleCycleCPU__DOT__ALU_in2 = 0;
    CData/*0:0*/ SingleCycleCPU__DOT____Vcellinp__pc_mux__s;
    SingleCycleCPU__DOT____Vcellinp__pc_mux__s = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->PC_dbg = vlSelf->SingleCycleCPU__DOT__PC;
    vlSelf->SingleCycleCPU__DOT__Instr = vlSelf->SingleCycleCPU__DOT__imem__DOT__imem
        [(0xffU & (vlSelf->SingleCycleCPU__DOT__PC 
                   >> 2U))];
    SingleCycleCPU__DOT__RegDout1 = ((0U != (0x1fU 
                                             & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                >> 0xfU)))
                                      ? vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile
                                     [(0x1fU & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                >> 0xfU))]
                                      : 0U);
    vlSelf->SingleCycleCPU__DOT__RegDout2 = ((0U != 
                                              (0x1fU 
                                               & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                  >> 0x14U)))
                                              ? vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile
                                             [(0x1fU 
                                               & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                  >> 0x14U))]
                                              : 0U);
    vlSelf->SingleCycleCPU__DOT__Imm = ((0x40U & vlSelf->SingleCycleCPU__DOT__Instr)
                                         ? ((0x20U 
                                             & vlSelf->SingleCycleCPU__DOT__Instr)
                                             ? ((0x10U 
                                                 & vlSelf->SingleCycleCPU__DOT__Instr)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__Instr)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__Instr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__Instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->SingleCycleCPU__DOT__Instr) 
                                                           | ((0x800U 
                                                               & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                    >> 0x14U))))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__Instr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__Instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->SingleCycleCPU__DOT__Instr 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__Instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                    >> 7U))))))
                                                     : 0U)
                                                    : 0U))))
                                             : 0U) : 
                                        ((0x20U & vlSelf->SingleCycleCPU__DOT__Instr)
                                          ? ((0x10U 
                                              & vlSelf->SingleCycleCPU__DOT__Instr)
                                              ? ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__Instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__Instr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__Instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                              : ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__Instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__Instr)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__Instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                                          : ((0x10U 
                                              & vlSelf->SingleCycleCPU__DOT__Instr)
                                              ? ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__Instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__Instr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__Instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__Instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->SingleCycleCPU__DOT__Instr 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__Instr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__Instr)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__Instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__Instr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__Instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->SingleCycleCPU__DOT__Instr 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    __Vtableidx1 = (0x7fU & vlSelf->SingleCycleCPU__DOT__Instr);
    vlSelf->SingleCycleCPU__DOT__Branch = VSingleCycleCPU__ConstPool__TABLE_he4685dc5_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__MemtoReg = VSingleCycleCPU__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    SingleCycleCPU__DOT__AluOp = VSingleCycleCPU__ConstPool__TABLE_h69954461_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__MemWrite = VSingleCycleCPU__ConstPool__TABLE_ha96ed2bf_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__AluSrc = VSingleCycleCPU__ConstPool__TABLE_h75b8279d_0
        [__Vtableidx1];
    vlSelf->SingleCycleCPU__DOT__RegWrite = VSingleCycleCPU__ConstPool__TABLE_h4608f605_0
        [__Vtableidx1];
    SingleCycleCPU__DOT__ALU_in2 = ((IData)(vlSelf->SingleCycleCPU__DOT__AluSrc)
                                     ? ((IData)(vlSelf->SingleCycleCPU__DOT__AluSrc)
                                         ? vlSelf->SingleCycleCPU__DOT__Imm
                                         : vlSelf->SingleCycleCPU__DOT__RegDout2)
                                     : vlSelf->SingleCycleCPU__DOT__RegDout2);
    __Vtableidx2 = ((0x20U & (vlSelf->SingleCycleCPU__DOT__Instr 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                >> 0xaU)) 
                                            | (IData)(SingleCycleCPU__DOT__AluOp)));
    vlSelf->SingleCycleCPU__DOT__ALUCtrlSig = VSingleCycleCPU__ConstPool__TABLE_h3cf07ec7_0
        [__Vtableidx2];
    vlSelf->SingleCycleCPU__DOT__ALU_out = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                             ? ((4U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                   ? 
                                                  ((SingleCycleCPU__DOT__RegDout1 
                                                    < SingleCycleCPU__DOT__ALU_in2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(32, SingleCycleCPU__DOT__RegDout1, SingleCycleCPU__DOT__ALU_in2)
                                                    ? 1U
                                                    : 0U))))
                                             : ((4U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, SingleCycleCPU__DOT__RegDout1, 
                                                                 (0x1fU 
                                                                  & SingleCycleCPU__DOT__ALU_in2))
                                                   : 
                                                  (SingleCycleCPU__DOT__RegDout1 
                                                   >> 
                                                   (0x1fU 
                                                    & SingleCycleCPU__DOT__ALU_in2)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                   ? 
                                                  (SingleCycleCPU__DOT__RegDout1 
                                                   << 
                                                   (0x1fU 
                                                    & SingleCycleCPU__DOT__ALU_in2))
                                                   : 
                                                  (SingleCycleCPU__DOT__RegDout1 
                                                   ^ SingleCycleCPU__DOT__ALU_in2)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                   ? 
                                                  (SingleCycleCPU__DOT__RegDout1 
                                                   | SingleCycleCPU__DOT__ALU_in2)
                                                   : 
                                                  (SingleCycleCPU__DOT__RegDout1 
                                                   & SingleCycleCPU__DOT__ALU_in2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtrlSig))
                                                   ? 
                                                  (SingleCycleCPU__DOT__RegDout1 
                                                   - SingleCycleCPU__DOT__ALU_in2)
                                                   : 
                                                  (SingleCycleCPU__DOT__RegDout1 
                                                   + SingleCycleCPU__DOT__ALU_in2)))));
    SingleCycleCPU__DOT____Vcellinp__pc_mux__s = ((IData)(vlSelf->SingleCycleCPU__DOT__Branch) 
                                                  & (0U 
                                                     == vlSelf->SingleCycleCPU__DOT__ALU_out));
    vlSelf->SingleCycleCPU__DOT__PC_next = ((IData)(SingleCycleCPU__DOT____Vcellinp__pc_mux__s)
                                             ? ((IData)(SingleCycleCPU__DOT____Vcellinp__pc_mux__s)
                                                 ? 
                                                (vlSelf->SingleCycleCPU__DOT__Imm 
                                                 + vlSelf->SingleCycleCPU__DOT__PC)
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->SingleCycleCPU__DOT__PC))
                                             : ((IData)(4U) 
                                                + vlSelf->SingleCycleCPU__DOT__PC));
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSingleCycleCPU___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_triggers__stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD bool VSingleCycleCPU___024root___eval_phase__stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSingleCycleCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSingleCycleCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge Clk or posedge Rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge Clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge Clk or posedge Rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge Clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleCPU___024root___ctor_var_reset(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Clk = VL_RAND_RESET_I(1);
    vlSelf->Rst = VL_RAND_RESET_I(1);
    vlSelf->PC_dbg = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__PC_next = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__Instr = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__AluSrc = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__RegDout2 = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__Imm = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__ALUCtrlSig = VL_RAND_RESET_I(4);
    vlSelf->SingleCycleCPU__DOT__ALU_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__imem__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__Clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Rst__0 = VL_RAND_RESET_I(1);
}
