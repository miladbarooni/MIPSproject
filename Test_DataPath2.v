`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:53:25 06/29/2019
// Design Name:   DataPath
// Module Name:   C:/Users/Aria/Desktop/arch_project/MIPSproject/Test_DataPath2.v
// Project Name:  MIPSproject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataPath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_DataPath2;

	// Inputs
	reg clk;
	reg initiate;

	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.initiate(initiate)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		initiate = 0;
		#60;
		initiate = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always begin
	#50;
	clk = ~clk;
	end
      
endmodule

