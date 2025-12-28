// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v0;
    __Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__rf__DOT__Rfile__v32;
    __Vdlyvdim0__SingleCycleCPU__DOT__rf__DOT__Rfile__v32 = 0;
    IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__rf__DOT__Rfile__v32;
    __Vdlyvval__SingleCycleCPU__DOT__rf__DOT__Rfile__v32 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v32;
    __Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v32 = 0;
    CData/*7:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__dmem__DOT__mem__v0;
    __Vdlyvdim0__SingleCycleCPU__DOT__dmem__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__dmem__DOT__mem__v0;
    __Vdlyvval__SingleCycleCPU__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__dmem__DOT__mem__v0;
    __Vdlyvset__SingleCycleCPU__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    VL_WRITEF("sum(x1)=%0#  i(x2)=%0#\n",32,vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile
              [1U],32,vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile
              [2U]);
    __Vdlyvset__SingleCycleCPU__DOT__dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v0 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v32 = 0U;
    if (vlSelf->SingleCycleCPU__DOT__MemWrite) {
        __Vdlyvval__SingleCycleCPU__DOT__dmem__DOT__mem__v0 
            = vlSelf->SingleCycleCPU__DOT__RegDout2;
        __Vdlyvset__SingleCycleCPU__DOT__dmem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__SingleCycleCPU__DOT__dmem__DOT__mem__v0 
            = (0xffU & (vlSelf->SingleCycleCPU__DOT__ALU_out 
                        >> 2U));
    }
    if (vlSelf->Rst) {
        __Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v0 = 1U;
    } else if (((IData)(vlSelf->SingleCycleCPU__DOT__RegWrite) 
                & (0U != (0x1fU & (vlSelf->SingleCycleCPU__DOT__Instr 
                                   >> 7U))))) {
        __Vdlyvval__SingleCycleCPU__DOT__rf__DOT__Rfile__v32 
            = ((IData)(vlSelf->SingleCycleCPU__DOT__MemtoReg)
                ? ((IData)(vlSelf->SingleCycleCPU__DOT__MemtoReg)
                    ? vlSelf->SingleCycleCPU__DOT__dmem__DOT__mem
                   [(0xffU & (vlSelf->SingleCycleCPU__DOT__ALU_out 
                              >> 2U))] : vlSelf->SingleCycleCPU__DOT__ALU_out)
                : vlSelf->SingleCycleCPU__DOT__ALU_out);
        __Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v32 = 1U;
        __Vdlyvdim0__SingleCycleCPU__DOT__rf__DOT__Rfile__v32 
            = (0x1fU & (vlSelf->SingleCycleCPU__DOT__Instr 
                        >> 7U));
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__dmem__DOT__mem__v0) {
        vlSelf->SingleCycleCPU__DOT__dmem__DOT__mem[__Vdlyvdim0__SingleCycleCPU__DOT__dmem__DOT__mem__v0] 
            = __Vdlyvval__SingleCycleCPU__DOT__dmem__DOT__mem__v0;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v0) {
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[2U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[0x1fU] = 0U;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__rf__DOT__Rfile__v32) {
        vlSelf->SingleCycleCPU__DOT__rf__DOT__Rfile[__Vdlyvdim0__SingleCycleCPU__DOT__rf__DOT__Rfile__v32] 
            = __Vdlyvval__SingleCycleCPU__DOT__rf__DOT__Rfile__v32;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h69954461_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h75b8279d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h4608f605_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h3cf07ec7_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ SingleCycleCPU__DOT__AluOp;
    SingleCycleCPU__DOT__AluOp = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->SingleCycleCPU__DOT__PC = ((IData)(vlSelf->Rst)
                                        ? 0U : vlSelf->SingleCycleCPU__DOT__PC_next);
    vlSelf->PC_dbg = vlSelf->SingleCycleCPU__DOT__PC;
    vlSelf->SingleCycleCPU__DOT__Instr = vlSelf->SingleCycleCPU__DOT__imem__DOT__imem
        [(0xffU & (vlSelf->SingleCycleCPU__DOT__PC 
                   >> 2U))];
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
    __Vtableidx2 = ((0x20U & (vlSelf->SingleCycleCPU__DOT__Instr 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->SingleCycleCPU__DOT__Instr 
                                                >> 0xaU)) 
                                            | (IData)(SingleCycleCPU__DOT__AluOp)));
    vlSelf->SingleCycleCPU__DOT__ALUCtrlSig = VSingleCycleCPU__ConstPool__TABLE_h3cf07ec7_0
        [__Vtableidx2];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ SingleCycleCPU__DOT__RegDout1;
    SingleCycleCPU__DOT__RegDout1 = 0;
    IData/*31:0*/ SingleCycleCPU__DOT__ALU_in2;
    SingleCycleCPU__DOT__ALU_in2 = 0;
    CData/*0:0*/ SingleCycleCPU__DOT____Vcellinp__pc_mux__s;
    SingleCycleCPU__DOT____Vcellinp__pc_mux__s = 0;
    // Body
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
    SingleCycleCPU__DOT__ALU_in2 = ((IData)(vlSelf->SingleCycleCPU__DOT__AluSrc)
                                     ? ((IData)(vlSelf->SingleCycleCPU__DOT__AluSrc)
                                         ? vlSelf->SingleCycleCPU__DOT__Imm
                                         : vlSelf->SingleCycleCPU__DOT__RegDout2)
                                     : vlSelf->SingleCycleCPU__DOT__RegDout2);
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

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);

bool VSingleCycleCPU___024root___eval_phase__act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSingleCycleCPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSingleCycleCPU___024root___eval_phase__nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSingleCycleCPU___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("SingleCycleCPU.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSingleCycleCPU___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSingleCycleCPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->Clk & 0xfeU))) {
        Verilated::overWidthError("Clk");}
    if (VL_UNLIKELY((vlSelf->Rst & 0xfeU))) {
        Verilated::overWidthError("Rst");}
}
#endif  // VL_DEBUG
