`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:37:09 06/30/2019
// Design Name:   DataPath
// Module Name:   D:/Uni/Arch/project/MIPSproject/Test_DataPath2.v
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
	reg INT;
	reg INTD;
	reg NMI;

	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.initiate(initiate), 
		.INT(INT), 
		.INTD(INTD), 
		.NMI(NMI)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		initiate = 0;
		INT = 0;
		INTD = 0;
		NMI = 0;

		// Wait 100 ns for global reset to finish
		#60;
	 initiate = 1;
		#100;
		INT = 1;
		
		#1000;
		INTD = 1;
		 
		//#200;
		//NMI = 1;
		 
		//#200;
		//NMI = 0;
        
		// Add stimulus here

	end
	
	always begin
		#50;
		clk = ~clk;
	end
      
endmodule

