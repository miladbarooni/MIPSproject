module SrcB(
    input [31:0] B,
    input [31:0] exsign,
    input [2:0] ALUSrcB,
    output reg  [31:0] muxout
);
always @(B, exsign, ALUSrcB)begin
    if (ALUSrcB == 2'b00)begin
        muxout <= B;
    end
    if (ALUSrcB == 2'b01)begin
        muxout <= 4;
    end
    if (ALUSrcB == 2'b10)begin
        muxout <= exsign;
    end
    if (ALUSrcB == 2'b11)begin
        muxout <= exsign << 2;
    end
end
endmodule