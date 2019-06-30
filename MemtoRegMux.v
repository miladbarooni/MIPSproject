`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:20:47 06/28/2019 
// Design Name: 
// Module Name:    MemtoRegMux 
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
module MemtoRegMux(
    input [31:0] wb,
    input [31:0] data,
    input MemtoReg,
    output reg [31:0] out
);
always @(wb, data, MemtoReg)begin
  if (MemtoReg)begin
    out <= data;
  end
  else 
    out <= wb;
end
endmodule 