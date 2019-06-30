`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:15:22 06/29/2019 
// Design Name: 
// Module Name:    Initializer 
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
module Initializer(
	input initiate,
	output reg reset

    );
	 
	 initial begin
		reset = 1;
	 end

	always @(posedge initiate)begin
		reset = 0;
	end

	

endmodule
