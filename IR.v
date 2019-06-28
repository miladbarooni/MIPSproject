module IR(
    input IRWrite,
    input clk,
    input [31:0] Inst,
    output [31:0] Out
);
always @(posedge clk)begin
  if (IRWrite == 1'b1)begin
    Out <= Inst;
  end
  
end