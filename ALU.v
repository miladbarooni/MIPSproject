`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:33 06/28/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] SrcA, SrcB,
    // from control unit (ALU control)
    input [3:0] operation,
    output reg [31:0] ALUResult,
    output reg Zero
);

initial begin
Zero = 0;
end

always @(operation, SrcA, SrcB)begin
  if (operation == 4'b0010) begin
    ALUResult <= SrcA + SrcB;
  end

  if (operation == 4'b0110) begin
    ALUResult <= SrcA - SrcB;
  end

  if (operation == 4'b0000)begin
    ALUResult <= SrcA & SrcB;
  end

  if (operation == 4'b0001)begin
    ALUResult <= SrcA | SrcB;
  end

  if (operation == 4'b1100)begin
    ALUResult <= ~(SrcA|SrcB);
  end

  if (operation == 4'b0011) begin
    ALUResult <= SrcA ^ SrcB;
  end

  if (operation == 4'b0111) begin
    if (SrcB >= SrcA ) ALUResult <= 1;
    if (SrcB < SrcA ) ALUResult <= 0;
  end

  if (SrcA == SrcB) begin
    Zero <= 1'b1;
  end

  if (~(SrcA == SrcB))begin
    Zero <= 1'b0;
  end
end
endmodule

