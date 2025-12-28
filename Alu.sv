`timescale 1ns/1ps
import ALU_pkg::*;

module Alu (
    output logic [31:0] Dout,
    output logic        ZF,
    input  logic [31:0] Din1, Din2,
    input  logic [3:0] ALUCTRL
);



    always_comb begin
        case (ALUCTRL)
            ALU_ADD:  Dout = Din1 + Din2;
            ALU_SUB:  Dout = Din1 - Din2;
            ALU_AND:  Dout = Din1 & Din2;
            ALU_OR:   Dout = Din1 | Din2;
            ALU_XOR:  Dout = Din1 ^ Din2;
            ALU_SLL:  Dout = Din1 << Din2[4:0];
            ALU_SRL:  Dout = Din1 >> Din2[4:0];
            ALU_SRA:  Dout = $signed(Din1) >>> Din2[4:0];
            ALU_SLT:  Dout = ($signed(Din1) < $signed(Din2)) ? 32'd1 : 32'd0;
            ALU_SLTU: Dout = (Din1 < Din2) ? 32'd1 : 32'd0;
            default:  Dout = 32'd0;
        endcase
    end

    assign ZF = (Dout == 32'd0);

endmodule

