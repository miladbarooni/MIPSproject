`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:21:46 06/28/2019 
// Design Name: 
// Module Name:    SignEx 
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
module SignEx(
	input [15:0]wirein,
	output [31:0]wireout
	);
assign wireout={{16{wirein[15]}},wirein};
endmodule
