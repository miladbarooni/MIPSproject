`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:17:07 06/28/2019 
// Design Name: 
// Module Name:    RegDstMux 
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
module RegDstMux(
    input [4:0] r1,
    input [4:0] r2,
    input RegDst,
    output reg [4:0] out
);
always @(r1, r2, RegDst)begin
  if (RegDst)begin
    out <= r2;
  end
  else 
    out <= r1;
end

endmodule 