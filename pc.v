module pc(
    input PCEn,
    input [31:0] nextPc,
    input clk,
    output reg [31:0] addr
);

always @(posedge clk)begin
  if (PCEn)begin
   addr <= nextPc ;
  end
  else 
    addr <= 32'bz;
end
endmodule