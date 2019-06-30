`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:18:58 06/28/2019 
// Design Name: 
// Module Name:    IR 
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
module IR(
    input IRWrite,
    input clk,
    input [31:0] Inst,
    output reg [31:0] Out
);
always @(posedge clk)begin
  if (IRWrite == 1'b1)begin
    Out <= Inst;
  end
 end
endmodule  