module signex(
	input [15:0]wirein,
	output [31:0]wireout
	);
assign wireout={{16{wirein[15]}},wirein};
endmodule

module test;
reg [15:0]in;
wire [31:0]out;
signex signex(in,out);

initial begin
$dumpfile("signexvcd");
$dumpvars(0,test);
#1 in = 16'b1111011111011101;
#2 $finish;
end 
endmodule
