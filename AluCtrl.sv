`timescale 1ns/1ps

import ALU_pkg::*;

module AluCtrl
(
    output logic [3:0] ALUCtrl,
    input logic [1:0] ALUOp,
    input logic [2:0] funct3,
    input logic       funct7b5
);


    always_comb begin
        case(ALUOp)
            2'b00: ALUCtrl = ALU_ADD;
            2'b01: ALUCtrl = ALU_SUB;
            2'b10: begin
                case(funct3)
                    3'b000: ALUCtrl = funct7b5 ? ALU_SUB : ALU_ADD;
                    3'b111: ALUCtrl = ALU_AND;
                    3'b110: ALUCtrl = ALU_OR;
                    3'b100: ALUCtrl = ALU_XOR;
                    3'b001: ALUCtrl = ALU_SLL;
                    3'b101: ALUCtrl = funct7b5 ? ALU_SRA : ALU_SRL;
                    3'b010: ALUCtrl = ALU_SLT;
                    3'b011: ALUCtrl = ALU_SLTU;
                    default: ALUCtrl = ALU_ADD;   
                endcase
            end
            default: ALUCtrl = ALU_ADD;
        endcase
    end
endmodule

