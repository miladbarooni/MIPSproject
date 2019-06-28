module ALU(
    input [31:0] SrcA, SrcB,
    // from control unit (ALU control)
    input [3:0] operation,
    output reg [31:0] ALUResult,
    output reg Zero
);

always @(operation, SrcA, SrcB)begin
  if (operation == 4'b0010) begin
    ALUResult <= SrcA + SrcB;
  end

  if (operation == 4'b0110) begin
    ALUResult <= SrcA - SrcB;
  end

  if (operation == 4'b0000)begin
    ALUResult <= SrcA & SrcB;
  end

  if (operation == 4'b0001)begin
    ALUResult <= SrcA | SrcB;
  end

  if (operation == 4'b1100)begin
    ALUResult <= ~(SrcA|SrcB);
  end

  if (operation == 4'b0011) begin
    ALUResult <= SrcA ^ SrcB;
  end

  if (operation == 4'b0111) begin
    if (SrcB >= SrcA ) ALUResult <= 0;
    if (SrcB < SrcA ) ALUResult <= 1;
  end

  if (SrcA == SrcB) begin
    Zero <= 1'b1;
  end

  if (~(SrcA == SrcB))begin
    Zero <= 1'b0;
  end
end
endmodule


module ALUtest;
reg [31:0] SrcA, SrcB;
reg [3:0] operation;
wire [31:0] ALUResult;
wire Zero;
ALU ALU1(SrcA, SrcB, operation, ALUResult, Zero);
initial begin
  $dumpfile("ALUtest.vcd");
  $dumpvars(0, ALUtest);
  operation = 4'b0010;
  SrcA = 32'b10101110101001010111100001110110;
  SrcB = 32'b11100110010001111001010100110010;
  #10;
  operation = 4'b0001;
  #10 $finish;
end
endmodule
