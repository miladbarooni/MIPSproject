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
    output reg [31:0] RD1, RD2,
	 input [3:0] state
);
	integer append_file;

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
		  
		  
	always @(state) begin
	append_file = $fopen("RegFile.txt", "a");
	$fwrite(append_file, "Reg1:%d,Reg2:%d,Reg3:%d,Reg4:%d,Reg5:%d,Reg6:%d,Reg7:%d,Reg8:%d,Reg9:%d,Reg10:%d,Reg11:%d,Reg12:%d,Reg13:%d,Reg14:%d,Reg15:%d,Reg16:%d,Reg17:%d,Reg18:%d,Reg19:%d,Reg20:%d,Reg21:%d,Reg22:%d,Reg23:%d,Reg24:%d,Reg25:%d,Reg26:%d,Reg27:%d,Reg28:%d,Reg29:%d,Reg30:%d,Reg31:%d,Reg32:%d-", registers[0], registers[1], registers[2], registers[3], registers[4], registers[5], registers[6], registers[7], registers[8], registers[9], registers[10], registers[11], registers[12], registers[13], registers[14], registers[15], registers[16], registers[17], registers[18], registers[19], registers[20], registers[21], registers[22], registers[23], registers[24], registers[25], registers[26], registers[27], registers[28], registers[29], registers[30], registers[31]);
	$fclose (append_file);	
	end
endmodule



