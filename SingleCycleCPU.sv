`timescale 1ns/1ps

import ALU_pkg::*;

module SingleCycleCPU 
(
    input logic Clk,
    input logic Rst,
    output logic [31:0] PC_dbg
);



    logic [31:0] PC, PC_plus4, PC_next, PC_branch;

    always_ff @(posedge Clk , posedge Rst) 
    begin
        if(Rst)
            PC <= 32'b0;
        else 
            PC <= PC_next;
    end

    assign PC_plus4 = PC + 32'd4;

   
    logic [31:0] Instr;

    InstrMem imem (
        .Instr (Instr),
        .Addr  (PC),
        .Data  (32'd0),
        .WE    (32'b0),
        .Clk   (Clk)
        );



    logic [6:0] opcode;
    logic [2:0] funct3;
    logic       funct7b5;
    logic [4:0] rs1, rs2, rd;

    assign opcode   = Instr[6:0];
    assign rd       = Instr[11:7];
    assign funct3   = Instr[14:12];
    assign rs1      = Instr[19:15];
    assign rs2      = Instr[24:20];
    assign funct7b5 = Instr[30];



    logic Branch, MemRead, MemtoReg, MemWrite, AluSrc, RegWrite;
    logic [1:0] AluOp;

    CtrlUnit ctrl (
        .opcode   (opcode),
        .Branch   (Branch),
        .MemRead  (MemRead),
        .MemtoReg (MemtoReg),
        .MemWrite (MemWrite),
        .AluSrc   (AluSrc),
        .RegWrite (RegWrite),
        .AluOp    (AluOp)
    );



    logic [31:0] RegDout1, RegDout2, RegDin;

    RegFile rf (
        .Dout1 (RegDout1),
        .Dout2 (RegDout2),
        .Din   (RegDin),
        .R1    (rs1),
        .R2    (rs2),
        .RD    (rd),
        .WE    (RegWrite),
        .Clk   (Clk),
        .Rst   (Rst)
    );



    logic [31:0] Imm;

    Imm_gen immgen (
        .instr (Instr),
        .imm   (Imm)
    );




    logic [3:0] ALUCtrlSig;

    AluCtrl alu_ctrl (
        .ALUCtrl  (ALUCtrlSig),
        .ALUOp    (AluOp),
        .funct3   (funct3),
        .funct7b5 (funct7b5)
    );


    
    logic [31:0] ALU_in2;

    mux2 alu_src_mux (
        .Dout (ALU_in2),
        .Din1 (RegDout2),
        .Din2 (Imm),
        .s    (AluSrc)
    );




    logic [31:0] ALU_out;
    logic        Zero;

    Alu alu (
        .Dout    (ALU_out),
        .ZF      (Zero),
        .Din1    (RegDout1),
        .Din2    (ALU_in2),
        .ALUCTRL (ALUCtrlSig)
    );



    logic [31:0] MemDout;

    MemData dmem (
        .Dout (MemDout),
        .Din  (RegDout2),
        .Addr (ALU_out),
        .WE   (MemWrite),
        .Clk  (Clk)
    );



    mux2 wb_mux (
        .Dout (RegDin),
        .Din1 (ALU_out),
        .Din2 (MemDout),
        .s    (MemtoReg)
    );


    assign PC_branch = PC + Imm;
    assign PC_dbg   = PC;

    mux2 pc_mux (
        .Dout (PC_next),
        .Din1 (PC_plus4),
        .Din2 (PC_branch),
        .s    (Branch & Zero)
    );



endmodule

