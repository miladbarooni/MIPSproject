module regfile(
    input clk,
    input RegWrite,
    input [4:0]A1,
    input [4:0]A2,
    input [4:0]A3,
    input [31:0]WD3,
    output reg [31:0] RD1, RD2
);
    // defining the register file;
    reg [32:0] registers[32:0];
    always @(posedge clk)
        if(RegWrite)
            registers[A3] <= WD3;
        else
        begin
            RD1 <= registers[A1];
            RD2 <= registers[A2];
        end
endmodule

module regFiletest;
reg RegWrite;
reg [4:0]A1;
reg [4:0]A2;
reg [4:0]A3;
reg [32:0]WD3;
wire [15:0] RD1, Rd2;
    initial begin
    $dumpfile("regfile.vcd");
    $dumpvars(0,regFiletest);
    RegWrite = 1;
    A1 = 5'b00000;
    A2 = 5'b00001;
    A3 = 5'b01111;
    WD3 = 32'b01011001001101010101010110111101;
    #1;
    A1 = 5'b00000;
    A2 = 5'b00001;
    A3 = 5'b01001;
    WD3 = 32'b01010110011101010101010110111101;
    reg clk = 0;
    always #2 clk = ~clk;
    end

    

endmodule

