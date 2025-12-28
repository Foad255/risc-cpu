`timescale 1ns/1ps

module RegFile
(
    output logic [31:0] Dout1,Dout2,
    input  logic [31:0] Din,
    input  logic [4:0] R1,R2,RD,
    input  logic WE,Clk,Rst
);



   logic [31:0] Rfile [0:31];

   // Read comb
   always_comb 
   begin
       Dout1 = (R1 != 0) ? Rfile[R1] : 32'b0;
       Dout2 = (R2 != 0) ? Rfile[R2] : 32'b0;
   end

   // Write sync
   always_ff @(posedge Clk) begin
    if (Rst)
       begin
        for (int i = 0; i < 32; i++)
            Rfile[i] <= 32'b0;
        end
        else if (WE && RD != 0)
        begin
         Rfile[RD] <= Din;
        end
  end
 
  always_ff @(posedge Clk) begin
    $display("sum(x1)=%0d  i(x2)=%0d", Rfile[1], Rfile[2]);
   end

endmodule




























