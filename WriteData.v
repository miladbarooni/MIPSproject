`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:38:40 06/28/2019 
// Design Name: 
// Module Name:    WriteData 
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
module WriteData(
	input clk,
	input [31:0] read_data,
	output reg [31:0] data

    );

	always @(posedge clk)
	begin
		data <= read_data;
	end

endmodule
