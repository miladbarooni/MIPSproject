// module Memmux;
`include "Memmux.v"
module Main(
    output [31:0] cycle,
    output [31:0] PC,
    output [31:0] ALUout,
    input clk,
    output RegDst,
    output ALUop,
    output ALUsrcA,
    output ALUsrcB,
    output regWrite,
    output zero,
    output memToReg,
    output branch,
    output [31:0] Memout
);


// The cotroller variables
wire [1:0] ALUOp, ALUSrcB, PCsrc; 
wire PCWriteCond, PCWrite, lorD, MemRead, MemWrite, MemtoReg, RWrite,  
ALUSrcA, RegWrite, RegDst; 



// to calculate cycle
reg[31:0] cycle = 32'd0;
always @(posedge clk) begin
  cycle = cycle +1;
end
reg[31:0] Instructions [255:0];
reg[31:0] PC = 128;
wire [4:0] instructionmuxout;

// The datapath wires
wire[31:0] pcmuxout,ALURegOut, MemData, BRegOut
          ;


// to chose between pc or aluregout
Memmux memmux1(PC, ALURegOut, IorD, pcmuxout);
// to pass this memmux to the memory (instruction)
Memory memory1(pcmuxout, MemData, MemWrite, MemRead, clk, BRegOut);

endmodule