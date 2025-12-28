`timescale 1ns/1ps
module InstrMem #(parameter MEM_DEPTH = 256) 
(
    output logic [31:0] Instr,
    input  logic [31:0] Data,Addr,
    input  logic WE,Clk
);

    logic [31:0] imem [0:MEM_DEPTH-1];


    // Read comb
    assign Instr = imem[Addr[31:2]]; // word aligned

    // Write sync
    always_ff @(posedge Clk) 
    begin
        if(WE)
            imem[Addr[31:2]] <= Data;
    end

 initial begin
    for (int i = 0; i < MEM_DEPTH; i++)
        imem[i] = 32'h00000013; // NOP

    // sum = 0
    imem[0] = 32'h00000093; // addi x1, x0, 0

    // i = 0
    imem[1] = 32'h00000113; // addi x2, x0, 0

    // limit = 6
    imem[2] = 32'h00600193; // addi x3, x0, 6

    // loop:
    imem[3] = 32'h002080B3; // add  x1, x1, x2   (sum += i)
    imem[4] = 32'h00110113; // addi x2, x2, 1   (i++)

    // if i == limit goto end
    imem[5] = 32'h00310663; // beq  x2, x3, +12 (to imem[8])

    // goto loop
    imem[6] = 32'hFE000AE3; // beq  x0, x0, -8  (back to imem[3])

    // end:
    imem[7] = 32'h00000013; // nop (halt)
 end
endmodule
