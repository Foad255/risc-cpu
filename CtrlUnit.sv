`timescale 1ns/1ps
module CtrlUnit
(
    output logic Branch, MemRead, MemtoReg, MemWrite, AluSrc, RegWrite,
    output logic [1:0] AluOp,
    input  logic [6:0] opcode
);


always_comb begin
        Branch   = 1'b0;
        MemRead = 1'b0;
        MemtoReg= 1'b0;
        AluOp    = 2'b00;
        MemWrite= 1'b0;
        AluSrc  = 1'b0;
        RegWrite= 1'b0;

        case (opcode)

            // R-type: add, sub, and, or, ...
            7'b0110011: begin
                RegWrite = 1'b1;
                AluSrc   = 1'b0;
                AluOp    = 2'b10;
            end

            // I-type Alu: addi, andi, ori, ...
            7'b0010011: begin
                RegWrite = 1'b1;
                AluSrc   = 1'b1;
                AluOp    = 2'b10;
            end

            // Load (LW)
            7'b0000011: begin
                RegWrite = 1'b1;
                MemRead  = 1'b1;
                MemtoReg = 1'b1;
                AluSrc   = 1'b1;
                AluOp    = 2'b00;
            end

            // Store (SW)
            7'b0100011: begin
                MemWrite = 1'b1;
                AluSrc   = 1'b1;
                AluOp    = 2'b00;
            end

            // Branch (BEQ, BNE, ...)
            7'b1100011: begin
                Branch = 1'b1;
                AluSrc = 1'b0;
                AluOp  = 2'b01;
            end

            default: begin
                // NOP / unsupported opcode
            end
        endcase
    end
endmodule
