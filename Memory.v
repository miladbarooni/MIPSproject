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
integer append_file;

initial begin 
   
	// DATA
	MEMO [0] <= 32'd8;
   MEMO [1] <= 32'd1;
   MEMO [2] <= 32'd1;
  //MEMO [6] <= 32'd7;


	
	MEMO[10] <= 32'h00000074; // t
	MEMO[11] <= 32'h00000068; // h
	MEMO[12] <= 32'h00000065; // e
	MEMO[13] <= 32'h0000006e; // n
	MEMO[14] <= 32'h00000064; // d


	// INSTRUCTION
   MEMO[128] <= 32'h8c030000;
   MEMO[132] <= 32'h8c040001;
   MEMO[136] <= 32'h8c050002;
   MEMO[140] <= 32'h8c010002;
   MEMO[144] <= 32'h10600004;
   MEMO[148] <= 32'h00852020;
   MEMO[152] <= 32'h00852822;
   MEMO[156] <= 32'h00611820;
   MEMO[160] <= 32'h10000001;
   MEMO[164] <= 32'h00852020;
   MEMO[168] <= 32'hac040006;
   MEMO[172] <= 32'h0064402A;
   MEMO[176] <= 32'h00852020;
   MEMO[180] <= 32'h00a43024;
   MEMO[184] <= 32'h00c53826;
  
	// the end
	MEMO[188] <= 32'h8C08000E; // lw // d // t0
	MEMO[192] <= 32'h8C09000D; // lw // n // t1
	MEMO[196] <= 32'h8C0A000C; // lw // e // t2
	MEMO[200] <= 32'h8C0B000B; // lw // h // t3
	MEMO[204] <= 32'h8C0C000A; // lw // t // t4
	
	MEMO[208] <= 32'hAC0C01EF; 
	MEMO[212] <= 32'h00000020;
	MEMO[216] <= 32'hAC0B01F0; 
	MEMO[220] <= 32'h00000020;
	MEMO[224] <= 32'hAC0A01F1; 
	MEMO[228] <= 32'h00000020;
	MEMO[232] <= 32'hAC0001F2; 
	MEMO[236] <= 32'h00000020;
	MEMO[240] <= 32'hAC0001F3; 
	MEMO[244] <= 32'h00000020;
	MEMO[248] <= 32'hAC0A01F4; 
	MEMO[252] <= 32'h00000020;
	MEMO[256] <= 32'hAC0901F5; 
	MEMO[260] <= 32'h00000020;
	MEMO[264] <= 32'hAC0801F6; 
	MEMO[268] <= 32'h00000020; 
	// empty texts
	MEMO[272] <= 32'hAC0001F7;
	MEMO[276] <= 32'h00000020; 
	MEMO[280] <= 32'hAC0001F8;
	MEMO[284] <= 32'h00000020; 
	MEMO[288] <= 32'hAC0001F9;
	MEMO[292] <= 32'h00000020; 
	MEMO[296] <= 32'hAC0001FA;
	MEMO[300] <= 32'h00000020; 
	MEMO[304] <= 32'hAC0001FB;
	MEMO[308] <= 32'h00000020; 
	MEMO[312] <= 32'hAC0001FC;
	MEMO[316] <= 32'h00000020; 
	MEMO[320] <= 32'hAC0001FD;
	MEMO[324] <= 32'h00000020;
	MEMO[328] <= 32'hAC0001FE;
  

   // MONITOR
	MEMO[495] <= 32'h00000077;
	MEMO[496] <= 32'h00000065;
	MEMO[497] <= 32'h0000006c;
	MEMO[498] <= 32'h00000000;
	MEMO[499] <= 32'h00000063;
	MEMO[500] <= 32'h0000006f;
	MEMO[501] <= 32'h0000006d;
	MEMO[502] <= 32'h00000065;
	MEMO[503] <= 32'h00000072;
	MEMO[504] <= 32'h00000075;
	MEMO[505] <= 32'h0000006e;
	MEMO[506] <= 32'h0000006e;
	MEMO[507] <= 32'h00000069;
	MEMO[508] <= 32'h0000006e;
	MEMO[509] <= 32'h00000067;
	MEMO[510] <= 32'h0000002e;
	
	
 

end

always @(*) begin
	append_file = $fopen("Memory.txt", "a");
	$fwrite(append_file, "Memo1:%d,Memo2:%d,Memo3:%d,Memo4:%d,Memo5:%d,Memo6:%d,Memo7:%d,Memo8:%d,Memo9:%d,Memo10:%d,Memo11:%d,Memo12:%d,Memo13:%d,Memo14:%d,Memo15:%d,Memo16:%d-", MEMO[495], MEMO[496], MEMO[497], MEMO[498], MEMO[499], MEMO[500], MEMO[501], MEMO[502], MEMO[503], MEMO[504], MEMO[505], MEMO[506], MEMO[507], MEMO[508], MEMO[509], MEMO[510]);
	$fclose (append_file);
  if (MemWrite == 1'b1) begin
    MEMO[addr] <= write_data;
  end
  else begin
    read_data <= MEMO[addr];
  end
end

endmodule