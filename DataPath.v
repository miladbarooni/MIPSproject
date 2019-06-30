`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:44 06/28/2019 
// Design Name: 
// Module Name:    DataPath 
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

module DataPath(    
	input clk,
	input initiate
);

	// controller variables
	wire PCEn;
	wire IorD;
	wire MemWrite;
	wire IRWrite;

	
	wire PCSrc;
	wire [1:0] ALUSrcB; 
	wire ALUSrcA;
	wire RegWrite;
	wire RegDst;
	wire MemtoReg;
	wire [1:0] ALUOp;

	// datapath variables
	wire [31:0] PC_in;
	wire Zero; 
	
	wire [31:0] PC_out;
	wire [31:0] ALUOut;
	wire [31:0] Adr;
	wire [31:0] MemData;
	wire [31:0] Instr;
	wire [31:0] Data;
	wire [4:0] A3;
	wire [31:0] WD3;
	wire [31:0] RD1;
	wire [31:0] RD2;
	wire [31:0] Signimm;
	wire [31:0] A_out;
	wire [31:0] B_out;
	wire [31:0] SrcA;
	wire [31:0] SrcB;
	wire [3:0] Operation;
	wire [31:0] ALUResult;
	wire reset;

	Initializer Initializer1 (
		 .initiate(initiate),  
		 .reset(reset)
		 );




	PC PC1 (
		 .PCEn(PCEn), 
		 .PC_in(PC_in), 
		 .clk(clk), 
		 .PC_out(PC_out)
		 );
		 
		 
	MemMux MemMux1 (
    .PC_out(PC_out), 
    .ALUOut(ALUOut), 
    .IorD(IorD), 
    .out(Adr)
    );


	Memory Memory1 (
		 .addr(Adr), 
		 .write_data(B_out), 
		 .MemWrite(MemWrite), 
		 .clk(clk), 
		 .read_data(MemData)
		 );
		 
	IR IR1 (
    .IRWrite(IRWrite), 
    .clk(clk), 
    .Inst(MemData), 
    .Out(Instr)
    );	 

	 WriteData WriteData1 (
    .clk(clk),  
    .read_data(MemData), 
    .data(Data)
    );
	 
	 
	 Controller Controller1 (
    .clk(clk), 
	 .reset(reset),
    .Op(Instr[31:26]), 
    .Zero(Zero), 
    .IorD(IorD), 
    .MemWrite(MemWrite), 
    .MemtoReg(MemtoReg), 
    .IRWrite(IRWrite), 
    .PCSrc(PCSrc), 
    .ALUSrcB(ALUSrcB), 
    .ALUSrcA(ALUSrcA), 
    .RegWrite(RegWrite), 
    .RegDst(RegDst), 
    .PCEn(PCEn), 
    .ALUOp(ALUOp)
    );
	 
	 
	 RegDstMux RegDstMux1 (
    .r1(Instr[20:16]), 
    .r2(Instr[15:11]), 
    .RegDst(RegDst), 
    .out(A3)
    );


	 MemtoRegMux MemtoRegMux1 (
    .wb(ALUOut), 
    .data(Data), 
    .MemtoReg(MemtoReg), 
    .out(WD3)
    );


	 Regfile Regfile1 (
    .clk(clk), 
    .RegWrite(RegWrite), 
    .A1(Instr[25:21]), 
    .A2(Instr[20:16]), 
    .A3(A3), 
    .WD3(WD3), 
    .RD1(RD1), 
    .RD2(RD2)
    );



	 SignEx SignEx1 (
    .wirein(Instr[15:0]), 
    .wireout(Signimm)
    );



	 RegfileOut RegfileOut1 (
    .A(RD1), 
    .B(RD2), 
    .clk(clk), 
    .A_out(A_out), 
    .B_out(B_out)
    );


	 SrcAMux SrcAMux1 (
    .A(A_out), 
    .Pc(PC_out), 
    .ALUSrcA(ALUSrcA), 
    .muxout(SrcA)
    );


	SrcBMux SrcBMux2 (
    .B(B_out), 
    .exsign(Signimm), 
    .ALUSrcB(ALUSrcB), 
    .muxout(SrcB)
    );



	 ALUcontrol ALUcontrol1 (
    .ALUop1(ALUOp[1]), 
    .ALUop0(ALUOp[0]), 
    .funct(Instr[5:0]), 
    .opcode(Instr[31:26]), 
    .Operation(Operation)
    );



	 ALU ALU1 (
    .SrcA(SrcA), 
    .SrcB(SrcB), 
    .operation(Operation), 
    .ALUResult(ALUResult), 
    .Zero(Zero)
    );


	 ALUout ALUout1 (
    .clk(clk), 
    .ALUResult(ALUResult), 
    .aluout(ALUOut)
    );


	 ALUOutMux ALUOutMux1 (
    .ALUout(ALUOut), 
    .ALUResutl(ALUResult), 
    .PCSrc(PCSrc), 
    .out(PC_in)
    );









		 
		 
endmodule 