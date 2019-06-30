`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:17:56 06/28/2019 
// Design Name: 
// Module Name:    ALUout 
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
module ALUout(
    input clk,
    input [31:0]ALUResult,
    output reg [31:0] aluout
);
always @(posedge clk)begin
  aluout <= ALUResult;
end

endmodule 