module DRegmux(
    input [31:0] r1,
    input [31:0] r2,
    input RegDst,
    output reg [31:0] out
);
always @(r1, r2, RegDst)begin
  if (RegDst)begin
    out <= r2;
  end
  else 
    out <= r1;
end

endmodule 