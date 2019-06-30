`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:58 06/29/2019 
// Design Name: 
// Module Name:    SrcAMux 
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
module SrcAMux(
    input [31:0] A,
    input [31:0] Pc,
    input ALUSrcA,
    output reg [31:0] muxout
);
always @(A, Pc, ALUSrcA)begin
  if (ALUSrcA)begin
    muxout <= A;
  end
  else
    muxout <= Pc;
end
endmodule