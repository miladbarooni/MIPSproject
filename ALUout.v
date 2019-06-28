module ALUout(
    input clk,
    input [31:0]ALUResult,
    output reg [31:0] aluout
);
always @(posedge clk)begin
  aluout <= ALUResult;
end
endmodule