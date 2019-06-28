module RegfileOut(
    input [31:0] A,
    input [31:0] B,
    input clk,
    output reg [31:0] A_out,
    output reg [31:0] B_out
);
always @(clk)begin
    A_out <= A;
    B_out <= B;
end

endmodule