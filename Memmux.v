`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:41:13 06/28/2019 
// Design Name: 
// Module Name:    MemMux 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MemMux(
    input [31:0] PC_out,
    input [31:0] ALUOut,
    input IorD,
    output reg [31:0] out
);

always @(PC_out, ALUOut, IorD)begin
  if(IorD)begin
    out <= ALUOut;
  end
  else
    out <= PC_out;
  end
endmodule 