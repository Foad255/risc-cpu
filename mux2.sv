`timescale 1ns/1ps
module mux2 #(parameter WIDTH = 32)
(
    output logic [WIDTH-1:0] Dout,
    input  logic [WIDTH-1:0] Din1,
    input  logic [WIDTH-1:0] Din2,
    input  logic             s
);

    always_comb begin
        case (s)
            1'b0: Dout = Din1;
            1'b1: Dout = Din2;
            default: Dout = Din1;
        endcase
    end

endmodule

