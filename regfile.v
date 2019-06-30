`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:55 06/28/2019 
// Design Name: 
// Module Name:    Regfile 
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
module Regfile(
    input clk,
    input RegWrite,
    input [4:0]A1,
    input [4:0]A2,
    input [4:0]A3,
    input [31:0]WD3,
    output reg [31:0] RD1, RD2
);


    // defining the register file;
    reg [31:0] registers[31:0];
	 
	 initial begin
		registers[0] = 0;
	 end
    always @(posedge clk)
        if(RegWrite)
            registers[A3] <= WD3;
        else
        begin
            RD1 <= registers[A1];
            RD2 <= registers[A2];
        end
endmodule



