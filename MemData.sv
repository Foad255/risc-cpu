`timescale 1ns/1ps
module MemData #(parameter MEM_DEPTH = 256)
(
    output logic [31:0] Dout,
    input  logic [31:0] Din, Addr,
    input  logic WE,Clk
);

    logic [31:0] mem [0:MEM_DEPTH-1];


    // Read comb
    assign Dout = mem[Addr[32:2]];

    // Write sync
    always_ff @(posedge Clk) 
    begin
        if(WE)
            mem[Addr[31:2]] <= Din;
    end
    
endmodule


