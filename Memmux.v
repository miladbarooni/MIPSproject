module Memmux(
    input [31:0] pc,
    input [31:0] data,
    input IorD,
    output reg [31:0] out
);

always @(pc, data, IorD)begin
  if(IorD)begin
    out <= data;
  end
  else
    out <= pc;
end