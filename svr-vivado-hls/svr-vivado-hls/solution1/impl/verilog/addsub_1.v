// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module addsub_1 (
        ap_ready,
        a_V,
        b_V,
        add_V,
        ap_return
);


output   ap_ready;
input  [42:0] a_V;
input  [42:0] b_V;
input  [0:0] add_V;
output  [43:0] ap_return;

wire  signed [43:0] tmp_fu_34_p1;
wire  signed [43:0] tmp_s_fu_38_p1;
wire   [43:0] r_V_fu_48_p2;
wire   [43:0] r_V_5_fu_42_p2;

assign ap_ready = 1'b1;

assign ap_return = ((add_V[0:0] === 1'b1) ? r_V_fu_48_p2 : r_V_5_fu_42_p2);

assign r_V_5_fu_42_p2 = ($signed(tmp_fu_34_p1) - $signed(tmp_s_fu_38_p1));

assign r_V_fu_48_p2 = ($signed(tmp_s_fu_38_p1) + $signed(tmp_fu_34_p1));

assign tmp_fu_34_p1 = $signed(a_V);

assign tmp_s_fu_38_p1 = $signed(b_V);

endmodule //addsub_1