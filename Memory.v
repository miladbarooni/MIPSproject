`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:22 06/28/2019 
// Design Name: 
// Module Name:    Memory 
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
module Memory (
input wire [31:0] addr,          // Memory Address
input wire [31:0] write_data,    // Memory Address Contents
input wire MemWrite,
input wire clk,                  // All synchronous elements, including memories, should have a clock signal
output reg [31:0] read_data      // Output of Memory Address Contents
);
// a 512 two word memory
reg [31:0] MEMO[511:0]; 


initial begin 
  MEMO [0] <= 32'd8;
  MEMO [1] <= 32'd1;
  MEMO [2] <= 32'd1;
  //MEMO [6] <= 32'd7;

  MEMO[128] <= 32'h8c030000;
  MEMO[132] <= 32'h8c040001;
  MEMO[136] <= 32'h8c050002;
  MEMO[140] <= 32'h8c010002;
  MEMO[144] <= 32'h10600004;
  MEMO[148] <= 32'h00852020;
  MEMO[152] <= 32'h00852822;
  MEMO[156] <= 32'h00611820;
  MEMO[160] <= 32'h10000000;
  MEMO[164] <= 32'hac040006;
  MEMO[168] <= 32'h0083402a;



end

always @(*) begin
  if (MemWrite == 1'b1) begin
    MEMO[addr] <= write_data;
  end
  else begin
    read_data <= MEMO[addr];
  end
end

endmodule