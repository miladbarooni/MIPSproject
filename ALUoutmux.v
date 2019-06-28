module ALUoutmux(
    input [31:0] ALUout,
    input [31:0] ALUResutl,
    input PCSrc,
    output reg [31:0] out
);

always @(ALUout, ALUResutl, PCSrc)begin
  if (PCSrc)begin
    out <= ALUResutl;
  end
  else
    out <= ALUout;
end
endmodule