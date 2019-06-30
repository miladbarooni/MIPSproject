`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:07 06/28/2019 
// Design Name: 
// Module Name:    RegfileOut 
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
module RegfileOut(
    input [31:0] A,
    input [31:0] B,
    input clk,
    output reg [31:0] A_out,
    output reg [31:0] B_out
);
always @(clk)begin
    A_out <= A;
    B_out <= B;
end

endmodule 