module Memory (
input wire [31:0] addr,          // Memory Address
input wire [31:0] write_data,    // Memory Address Contents
input wire MemWrite, MemRead,
input wire clk,                  // All synchronous elements, including memories, should have a clock signal
output wire [31:0] read_data      // Output of Memory Address Contents
);
// a 256 two word memory
reg [31:0] MEMO[511:0]; 


initial begin
  MEMO [0] <= 32'd8;
  MEMO [1] <= 32'd1;
  MEMO [2] <= 32'd1;

  MEMO[128] <= 32'h8c030000;
  MEMO[132] <= 32'h8c040001;
  MEMO[136] <= 32'h8c050002;
  MEMO[140] <= 32'h8c010002;
  MEMO[144] <= 32'h10600004;
  MEMO[148] <= 32'h00852020;
  MEMO[152] <= 32'h00852822;
  MEMO[156] <= 32'h00611820;
  MEMO[160] <= 32'h1000fffb;
  MEMO[164] <= 32'hac040006;



end

always @(posedge clk) begin
  if (MemWrite == 1'b1) begin
    MEMO[addr] <= write_data;
  end
  if (memread == 1'b1) begin
    read_data <= MEMO[addr];
  end
end

endmodule