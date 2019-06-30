`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:01:38 06/29/2019 
// Design Name: 
// Module Name:    ALUOutMux 
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
module ALUOutMux(
    input [31:0] ALUout,
    input [31:0] ALUResutl,
    input PCSrc,
    output reg [31:0] out
);


always @(ALUout, ALUResutl, PCSrc)begin
  if (!PCSrc)begin
    out <= ALUResutl;
  end
  else
    out <= ALUout;
end
endmodule 