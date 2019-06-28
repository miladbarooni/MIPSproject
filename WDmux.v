module WDmux(
    input [31:0] wb,
    input [31:0] data,
    input MemtoReg,
    output reg [31:0] out
);
always @(wb, data, MemtoReg)begin
  if (MemtoReg)begin
    out <= data;
  end
  else 
    out <= wb;
end
endmodule