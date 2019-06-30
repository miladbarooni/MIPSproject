`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:37 06/28/2019 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input PCEn,
    input [31:0] PC_in,
    input clk,
    output reg [31:0] PC_out
);

initial begin
PC_out <= 128;
end

always @(posedge clk)begin

  if (PCEn )begin
   PC_out <= PC_in ;
  end

end
endmodule 