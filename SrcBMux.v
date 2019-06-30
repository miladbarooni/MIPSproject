`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:58 06/29/2019 
// Design Name: 
// Module Name:    SrcBMux 
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
module SrcBMux(
    input [31:0] B,
    input [31:0] exsign,
    input [1:0] ALUSrcB,
    output reg  [31:0] muxout
);
always @(B, exsign, ALUSrcB)begin
    if (ALUSrcB == 2'b00)begin
        muxout <= B;
    end
    if (ALUSrcB == 2'b01)begin
        muxout <= 4;
    end
    if (ALUSrcB == 2'b10)begin
        muxout <= exsign;
    end
    if (ALUSrcB == 2'b11)begin
        muxout <= exsign << 2;
    end
end
endmodule