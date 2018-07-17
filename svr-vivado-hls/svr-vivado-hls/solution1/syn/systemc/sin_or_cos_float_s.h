// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sin_or_cos_float_s_HH_
#define _sin_or_cos_float_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "convert_mul_80ns_fYi.h"
#include "convert_mux_83_1_g8j.h"
#include "convert_mux_164_1hbi.h"
#include "convert_mul_mul_1ibs.h"
#include "convert_mul_mul_1jbC.h"
#include "sin_or_cos_float_bkb.h"
#include "sin_or_cos_float_cud.h"
#include "sin_or_cos_float_dEe.h"
#include "sin_or_cos_float_eOg.h"

namespace ap_rtl {

struct sin_or_cos_float_s : public sc_module {
    // Port declarations 10
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<32> > t_in;
    sc_in< sc_logic > do_cos;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_lv<1> > ap_var_for_const0;
    sc_signal< sc_lv<1> > ap_var_for_const1;


    // Module declarations
    sin_or_cos_float_s(sc_module_name name);
    SC_HAS_PROCESS(sin_or_cos_float_s);

    ~sin_or_cos_float_s();

    sc_trace_file* mVcdFile;

    sin_or_cos_float_bkb* ref_4oPi_table_100_V_U;
    sin_or_cos_float_cud* second_order_float_2_U;
    sin_or_cos_float_dEe* second_order_float_3_U;
    sin_or_cos_float_eOg* second_order_float_s_U;
    convert_mul_80ns_fYi<1,5,80,24,104>* convert_mul_80ns_fYi_U1;
    convert_mux_83_1_g8j<1,1,1,1,1,1,1,1,1,1,3,1>* convert_mux_83_1_g8j_U2;
    convert_mux_164_1hbi<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* convert_mux_164_1hbi_U3;
    convert_mux_164_1hbi<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* convert_mux_164_1hbi_U4;
    convert_mul_mul_1ibs<1,1,15,15,30>* convert_mul_mul_1ibs_U5;
    convert_mul_mul_1jbC<1,1,15,15,30>* convert_mul_mul_1jbC_U6;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter15;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<4> > ref_4oPi_table_100_V_address0;
    sc_signal< sc_logic > ref_4oPi_table_100_V_ce0;
    sc_signal< sc_lv<100> > ref_4oPi_table_100_V_q0;
    sc_signal< sc_lv<8> > second_order_float_2_address0;
    sc_signal< sc_logic > second_order_float_2_ce0;
    sc_signal< sc_lv<30> > second_order_float_2_q0;
    sc_signal< sc_lv<8> > second_order_float_3_address0;
    sc_signal< sc_logic > second_order_float_3_ce0;
    sc_signal< sc_lv<23> > second_order_float_3_q0;
    sc_signal< sc_lv<8> > second_order_float_s_address0;
    sc_signal< sc_logic > second_order_float_s_ce0;
    sc_signal< sc_lv<15> > second_order_float_s_q0;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter1_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter2_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter3_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter4_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter5_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter6_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter7_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter8_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter9_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter10_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter11_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter12_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter13_reg;
    sc_signal< sc_lv<1> > do_cos_read_reg_1171_pp0_iter14_reg;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178_pp0_iter1_reg;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178_pp0_iter2_reg;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178_pp0_iter3_reg;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178_pp0_iter4_reg;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178_pp0_iter5_reg;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178_pp0_iter6_reg;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178_pp0_iter7_reg;
    sc_signal< sc_lv<1> > p_Result_19_reg_1178_pp0_iter8_reg;
    sc_signal< sc_lv<8> > loc_V_fu_262_p4;
    sc_signal< sc_lv<8> > loc_V_reg_1184;
    sc_signal< sc_lv<8> > loc_V_reg_1184_pp0_iter1_reg;
    sc_signal< sc_lv<8> > loc_V_reg_1184_pp0_iter2_reg;
    sc_signal< sc_lv<8> > loc_V_reg_1184_pp0_iter3_reg;
    sc_signal< sc_lv<8> > loc_V_reg_1184_pp0_iter4_reg;
    sc_signal< sc_lv<8> > loc_V_reg_1184_pp0_iter5_reg;
    sc_signal< sc_lv<8> > loc_V_reg_1184_pp0_iter6_reg;
    sc_signal< sc_lv<8> > loc_V_reg_1184_pp0_iter7_reg;
    sc_signal< sc_lv<23> > loc_V_1_fu_272_p1;
    sc_signal< sc_lv<23> > loc_V_1_reg_1191;
    sc_signal< sc_lv<23> > loc_V_1_reg_1191_pp0_iter1_reg;
    sc_signal< sc_lv<1> > closepath_fu_276_p2;
    sc_signal< sc_lv<1> > closepath_reg_1197;
    sc_signal< sc_lv<1> > closepath_reg_1197_pp0_iter1_reg;
    sc_signal< sc_lv<1> > closepath_reg_1197_pp0_iter2_reg;
    sc_signal< sc_lv<1> > closepath_reg_1197_pp0_iter3_reg;
    sc_signal< sc_lv<1> > closepath_reg_1197_pp0_iter4_reg;
    sc_signal< sc_lv<1> > closepath_reg_1197_pp0_iter5_reg;
    sc_signal< sc_lv<1> > closepath_reg_1197_pp0_iter6_reg;
    sc_signal< sc_lv<1> > closepath_reg_1197_pp0_iter7_reg;
    sc_signal< sc_lv<4> > tmp_15_fu_311_p1;
    sc_signal< sc_lv<4> > tmp_15_reg_1208;
    sc_signal< sc_lv<80> > Med_V_reg_1213;
    sc_signal< sc_lv<1> > tmp_6_fu_354_p2;
    sc_signal< sc_lv<1> > tmp_6_reg_1228;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter3_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter4_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter7_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter8_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_6_reg_1228_pp0_iter14_reg;
    sc_signal< sc_lv<58> > p_Val2_6_reg_1234;
    sc_signal< sc_lv<3> > tmp_14_i_reg_1240;
    sc_signal< sc_lv<3> > p_Val2_24_fu_379_p3;
    sc_signal< sc_lv<3> > p_Val2_24_reg_1245;
    sc_signal< sc_lv<3> > p_Val2_24_reg_1245_pp0_iter8_reg;
    sc_signal< sc_lv<58> > p_Val2_8_fu_394_p3;
    sc_signal< sc_lv<58> > p_Val2_8_reg_1251;
    sc_signal< sc_lv<5> > Mx_zeros_V_fu_445_p1;
    sc_signal< sc_lv<5> > Mx_zeros_V_reg_1256;
    sc_signal< sc_lv<29> > Mx_V_reg_1262;
    sc_signal< sc_lv<29> > Mx_V_reg_1262_pp0_iter9_reg;
    sc_signal< sc_lv<29> > Mx_V_reg_1262_pp0_iter10_reg;
    sc_signal< sc_lv<29> > Mx_V_reg_1262_pp0_iter11_reg;
    sc_signal< sc_lv<8> > Ex_V_fu_482_p2;
    sc_signal< sc_lv<8> > Ex_V_reg_1269;
    sc_signal< sc_lv<8> > Ex_V_reg_1269_pp0_iter9_reg;
    sc_signal< sc_lv<8> > Ex_V_reg_1269_pp0_iter10_reg;
    sc_signal< sc_lv<8> > Ex_V_reg_1269_pp0_iter11_reg;
    sc_signal< sc_lv<8> > Ex_V_reg_1269_pp0_iter12_reg;
    sc_signal< sc_lv<8> > Ex_V_reg_1269_pp0_iter13_reg;
    sc_signal< sc_lv<1> > isNeg_fu_492_p3;
    sc_signal< sc_lv<1> > isNeg_reg_1274;
    sc_signal< sc_lv<9> > sh_assign_fu_506_p3;
    sc_signal< sc_lv<9> > sh_assign_reg_1279;
    sc_signal< sc_lv<1> > tmp_5_fu_514_p2;
    sc_signal< sc_lv<1> > tmp_5_reg_1285;
    sc_signal< sc_lv<1> > tmp_5_reg_1285_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_5_reg_1285_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_5_reg_1285_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_5_reg_1285_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_5_reg_1285_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_5_reg_1285_pp0_iter14_reg;
    sc_signal< sc_lv<1> > tmp_7_fu_519_p2;
    sc_signal< sc_lv<1> > tmp_7_reg_1291;
    sc_signal< sc_lv<1> > tmp_7_reg_1291_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_7_reg_1291_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_7_reg_1291_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_7_reg_1291_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_7_reg_1291_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_7_reg_1291_pp0_iter14_reg;
    sc_signal< sc_lv<1> > cos_basis_fu_582_p3;
    sc_signal< sc_lv<1> > cos_basis_reg_1299;
    sc_signal< sc_lv<1> > cos_basis_reg_1299_pp0_iter10_reg;
    sc_signal< sc_lv<1> > cos_basis_reg_1299_pp0_iter11_reg;
    sc_signal< sc_lv<1> > cos_basis_reg_1299_pp0_iter12_reg;
    sc_signal< sc_lv<1> > cos_basis_reg_1299_pp0_iter13_reg;
    sc_signal< sc_lv<22> > p_Val2_12_fu_599_p1;
    sc_signal< sc_lv<22> > p_Val2_12_reg_1305;
    sc_signal< sc_lv<22> > p_Val2_12_reg_1305_pp0_iter10_reg;
    sc_signal< sc_lv<15> > tmp_i1_reg_1310;
    sc_signal< sc_lv<1> > or_cond_42_fu_729_p2;
    sc_signal< sc_lv<1> > or_cond_42_reg_1330;
    sc_signal< sc_lv<1> > or_cond_42_reg_1330_pp0_iter10_reg;
    sc_signal< sc_lv<1> > or_cond_42_reg_1330_pp0_iter11_reg;
    sc_signal< sc_lv<1> > or_cond_42_reg_1330_pp0_iter12_reg;
    sc_signal< sc_lv<1> > or_cond_42_reg_1330_pp0_iter13_reg;
    sc_signal< sc_lv<1> > or_cond_42_reg_1330_pp0_iter14_reg;
    sc_signal< sc_lv<1> > p_Result_s_45_fu_749_p3;
    sc_signal< sc_lv<1> > p_Result_s_45_reg_1336;
    sc_signal< sc_lv<1> > p_Result_s_45_reg_1336_pp0_iter10_reg;
    sc_signal< sc_lv<1> > p_Result_s_45_reg_1336_pp0_iter11_reg;
    sc_signal< sc_lv<1> > p_Result_s_45_reg_1336_pp0_iter12_reg;
    sc_signal< sc_lv<1> > p_Result_s_45_reg_1336_pp0_iter13_reg;
    sc_signal< sc_lv<1> > p_Result_s_45_reg_1336_pp0_iter14_reg;
    sc_signal< sc_lv<15> > tmp_35_i_reg_1341;
    sc_signal< sc_lv<29> > p_Val2_15_reg_1346;
    sc_signal< sc_lv<29> > p_Val2_15_reg_1346_pp0_iter11_reg;
    sc_signal< sc_lv<23> > second_order_float_6_reg_1351;
    sc_signal< sc_lv<15> > second_order_float_8_reg_1356;
    sc_signal< sc_lv<22> > tmp_28_i_reg_1361;
    sc_signal< sc_lv<14> > tmp_30_i_reg_1366;
    sc_signal< sc_lv<29> > Mx_V_read_assign_fu_816_p3;
    sc_signal< sc_lv<29> > Mx_V_read_assign_reg_1371;
    sc_signal< sc_lv<30> > r_V_fu_837_p2;
    sc_signal< sc_lv<30> > r_V_reg_1376;
    sc_signal< sc_lv<29> > result_V_reg_1381;
    sc_signal< sc_lv<16> > p_Result_20_i_reg_1387;
    sc_signal< sc_lv<13> > p_Result_i1_reg_1392;
    sc_signal< sc_lv<32> > tmp_i14_i_fu_961_p3;
    sc_signal< sc_lv<32> > tmp_i14_i_reg_1397;
    sc_signal< sc_lv<32> > tmp_32_i_fu_972_p2;
    sc_signal< sc_lv<32> > tmp_32_i_reg_1402;
    sc_signal< sc_lv<1> > tmp_33_i_fu_978_p2;
    sc_signal< sc_lv<1> > tmp_33_i_reg_1408;
    sc_signal< sc_lv<32> > newexp_fu_1008_p2;
    sc_signal< sc_lv<32> > newexp_reg_1413;
    sc_signal< sc_lv<1> > tmp_21_reg_1418;
    sc_signal< sc_lv<1> > tmp_12_i_fu_1022_p2;
    sc_signal< sc_lv<1> > tmp_12_i_reg_1423;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<64> > tmp_i2_i_fu_306_p1;
    sc_signal< sc_lv<64> > tmp_36_i_fu_632_p1;
    sc_signal< sc_lv<32> > p_Val2_s_fu_250_p1;
    sc_signal< sc_lv<8> > expv_op_fu_282_p2;
    sc_signal< sc_lv<8> > addr_V_fu_288_p3;
    sc_signal< sc_lv<4> > tmp_1_fu_296_p4;
    sc_signal< sc_lv<100> > tmp_1_i_i_fu_315_p1;
    sc_signal< sc_lv<100> > r_V_3_fu_318_p2;
    sc_signal< sc_lv<24> > p_Result_20_fu_334_p3;
    sc_signal< sc_lv<80> > grp_fu_348_p0;
    sc_signal< sc_lv<24> > grp_fu_348_p1;
    sc_signal< sc_lv<104> > grp_fu_348_p2;
    sc_signal< sc_lv<1> > tmp_16_fu_385_p1;
    sc_signal< sc_lv<58> > p_Val2_i_fu_389_p2;
    sc_signal< sc_lv<29> > p_Result_i3_i_fu_401_p4;
    sc_signal< sc_lv<30> > p_Result_21_fu_411_p3;
    sc_signal< sc_lv<30> > p_Result_22_fu_419_p4;
    sc_signal< sc_lv<32> > p_Result_23_fu_429_p3;
    sc_signal< sc_lv<32> > val_assign_fu_437_p3;
    sc_signal< sc_lv<8> > p_i_fu_449_p2;
    sc_signal< sc_lv<58> > tmp_15_i_fu_461_p1;
    sc_signal< sc_lv<58> > p_Val2_11_fu_464_p2;
    sc_signal< sc_lv<8> > storemerge_i_fu_454_p3;
    sc_signal< sc_lv<8> > tmp_18_i_fu_479_p1;
    sc_signal< sc_lv<9> > sh_cast_fu_488_p1;
    sc_signal< sc_lv<9> > tmp_20_i_fu_500_p2;
    sc_signal< sc_lv<29> > sh_assign_1_cast_fu_527_p1;
    sc_signal< sc_lv<29> > tmp_22_i_fu_533_p2;
    sc_signal< sc_lv<32> > tmp_21_i_fu_530_p1;
    sc_signal< sc_lv<32> > sh_assign_1_cast5_fu_524_p1;
    sc_signal< sc_lv<32> > tmp_22_i_cast_fu_538_p1;
    sc_signal< sc_lv<32> > tmp_23_i_fu_542_p2;
    sc_signal< sc_lv<1> > tmp_fu_555_p10;
    sc_signal< sc_lv<1> > tmp_s_fu_576_p2;
    sc_signal< sc_lv<32> > ssdm_int_V_write_ass_fu_548_p3;
    sc_signal< sc_lv<1> > not_do_cos_i_fu_613_p2;
    sc_signal< sc_lv<1> > sin_basis_fu_618_p2;
    sc_signal< sc_lv<7> > p_Result_i_fu_589_p4;
    sc_signal< sc_lv<8> > p_Result_24_fu_624_p3;
    sc_signal< sc_lv<4> > p_Result_28_fu_639_p3;
    sc_signal< sc_lv<1> > tmp_2_fu_645_p18;
    sc_signal< sc_lv<1> > tmp_3_fu_683_p18;
    sc_signal< sc_lv<1> > tmp_4_fu_721_p3;
    sc_signal< sc_lv<1> > tmp_8_fu_738_p2;
    sc_signal< sc_lv<1> > p_Result_s_fu_733_p2;
    sc_signal< sc_lv<1> > p_Result_s_43_fu_743_p2;
    sc_signal< sc_lv<30> > p_Val2_13_fu_1157_p2;
    sc_signal< sc_lv<23> > p_Val2_1_fu_785_p0;
    sc_signal< sc_lv<22> > p_Val2_1_fu_785_p1;
    sc_signal< sc_lv<45> > p_Val2_1_fu_785_p2;
    sc_signal< sc_lv<30> > p_Val2_5_fu_1164_p2;
    sc_signal< sc_lv<30> > tmp_38_i_fu_822_p1;
    sc_signal< sc_lv<30> > tmp_39_i_fu_825_p1;
    sc_signal< sc_lv<30> > p_Val2_16_fu_828_p2;
    sc_signal< sc_lv<30> > tmp_41_i_cast_fu_834_p1;
    sc_signal< sc_lv<30> > p_Val2_17_fu_849_p0;
    sc_signal< sc_lv<29> > p_Val2_17_fu_849_p1;
    sc_signal< sc_lv<59> > p_Val2_17_fu_849_p2;
    sc_signal< sc_lv<8> > p_Ex_V_ret_fu_885_p3;
    sc_signal< sc_lv<17> > tmp_i1_41_fu_895_p3;
    sc_signal< sc_lv<14> > tmp_15_i1_fu_914_p3;
    sc_signal< sc_lv<32> > p_Val2_19_fu_902_p5;
    sc_signal< sc_lv<32> > p_Result_26_fu_933_p4;
    sc_signal< sc_lv<32> > p_Result_25_fu_921_p5;
    sc_signal< sc_lv<32> > p_Result_27_fu_951_p4;
    sc_signal< sc_lv<32> > tmp_29_i1_fu_969_p1;
    sc_signal< sc_lv<32> > tmp_i_i1_fu_943_p3;
    sc_signal< sc_lv<32> > shift_2_1_i_fu_984_p2;
    sc_signal< sc_lv<9> > rhs_V_fu_891_p1;
    sc_signal< sc_lv<9> > tmp_i2_fu_998_p2;
    sc_signal< sc_lv<32> > tmp_i2_cast_fu_1004_p1;
    sc_signal< sc_lv<32> > shift_1_i_fu_990_p3;
    sc_signal< sc_lv<29> > tmp_20_fu_1027_p1;
    sc_signal< sc_lv<32> > tmp_29_1_i_fu_1030_p1;
    sc_signal< sc_lv<32> > tmp_32_1_i_fu_1034_p2;
    sc_signal< sc_lv<23> > tmp_10_fu_1046_p4;
    sc_signal< sc_lv<23> > tmp_11_fu_1056_p4;
    sc_signal< sc_lv<1> > or_cond_i_fu_1039_p2;
    sc_signal< sc_lv<1> > tmp_9_fu_1086_p2;
    sc_signal< sc_lv<8> > out_exp_V_fu_1079_p3;
    sc_signal< sc_lv<8> > tmp_22_fu_1043_p1;
    sc_signal< sc_lv<8> > p_cast_cast_fu_1072_p3;
    sc_signal< sc_lv<8> > p_Result_s_44_fu_1091_p3;
    sc_signal< sc_lv<1> > not_or_cond_demorgan_fu_1106_p2;
    sc_signal< sc_lv<1> > not_or_cond_fu_1110_p2;
    sc_signal< sc_lv<23> > tmp_12_fu_1065_p3;
    sc_signal< sc_lv<1> > or_cond_fu_1124_p2;
    sc_signal< sc_lv<23> > newSel_cast_fu_1116_p3;
    sc_signal< sc_lv<23> > newSel1_fu_1128_p3;
    sc_signal< sc_lv<8> > ret_V_3_fu_1099_p3;
    sc_signal< sc_lv<23> > ret_V_4_fu_1136_p3;
    sc_signal< sc_lv<32> > p_Result_29_fu_1144_p4;
    sc_signal< sc_lv<15> > p_Val2_13_fu_1157_p0;
    sc_signal< sc_lv<30> > OP1_V_3_fu_757_p1;
    sc_signal< sc_lv<15> > p_Val2_13_fu_1157_p1;
    sc_signal< sc_lv<15> > p_Val2_5_fu_1164_p1;
    sc_signal< sc_logic > grp_fu_348_ce;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to14;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<104> > grp_fu_348_p00;
    sc_signal< sc_lv<104> > grp_fu_348_p10;
    sc_signal< sc_lv<59> > p_Val2_17_fu_849_p10;
    sc_signal< sc_lv<45> > p_Val2_1_fu_785_p10;
    sc_signal< sc_lv<30> > p_Val2_5_fu_1164_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_7E;
    static const sc_lv<8> ap_const_lv8_C2;
    static const sc_lv<8> ap_const_lv8_3F;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_63;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<32> ap_const_lv32_4D;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<58> ap_const_lv58_0;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<8> ap_const_lv8_83;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<29> ap_const_lv29_1FFFFFFF;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<9> ap_const_lv9_7F;
    static const sc_lv<29> ap_const_lv29_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<23> ap_const_lv23_7FFFFF;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_Ex_V_fu_482_p2();
    void thread_Mx_V_read_assign_fu_816_p3();
    void thread_Mx_zeros_V_fu_445_p1();
    void thread_OP1_V_3_fu_757_p1();
    void thread_addr_V_fu_288_p3();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter9();
    void thread_ap_block_state11_pp0_stage0_iter10();
    void thread_ap_block_state12_pp0_stage0_iter11();
    void thread_ap_block_state13_pp0_stage0_iter12();
    void thread_ap_block_state14_pp0_stage0_iter13();
    void thread_ap_block_state15_pp0_stage0_iter14();
    void thread_ap_block_state16_pp0_stage0_iter15();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage0_iter4();
    void thread_ap_block_state6_pp0_stage0_iter5();
    void thread_ap_block_state7_pp0_stage0_iter6();
    void thread_ap_block_state8_pp0_stage0_iter7();
    void thread_ap_block_state9_pp0_stage0_iter8();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to14();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return();
    void thread_closepath_fu_276_p2();
    void thread_cos_basis_fu_582_p3();
    void thread_expv_op_fu_282_p2();
    void thread_grp_fu_348_ce();
    void thread_grp_fu_348_p0();
    void thread_grp_fu_348_p00();
    void thread_grp_fu_348_p1();
    void thread_grp_fu_348_p10();
    void thread_isNeg_fu_492_p3();
    void thread_loc_V_1_fu_272_p1();
    void thread_loc_V_fu_262_p4();
    void thread_newSel1_fu_1128_p3();
    void thread_newSel_cast_fu_1116_p3();
    void thread_newexp_fu_1008_p2();
    void thread_not_do_cos_i_fu_613_p2();
    void thread_not_or_cond_demorgan_fu_1106_p2();
    void thread_not_or_cond_fu_1110_p2();
    void thread_or_cond_42_fu_729_p2();
    void thread_or_cond_fu_1124_p2();
    void thread_or_cond_i_fu_1039_p2();
    void thread_out_exp_V_fu_1079_p3();
    void thread_p_Ex_V_ret_fu_885_p3();
    void thread_p_Result_20_fu_334_p3();
    void thread_p_Result_21_fu_411_p3();
    void thread_p_Result_22_fu_419_p4();
    void thread_p_Result_23_fu_429_p3();
    void thread_p_Result_24_fu_624_p3();
    void thread_p_Result_25_fu_921_p5();
    void thread_p_Result_26_fu_933_p4();
    void thread_p_Result_27_fu_951_p4();
    void thread_p_Result_28_fu_639_p3();
    void thread_p_Result_29_fu_1144_p4();
    void thread_p_Result_i3_i_fu_401_p4();
    void thread_p_Result_i_fu_589_p4();
    void thread_p_Result_s_43_fu_743_p2();
    void thread_p_Result_s_44_fu_1091_p3();
    void thread_p_Result_s_45_fu_749_p3();
    void thread_p_Result_s_fu_733_p2();
    void thread_p_Val2_11_fu_464_p2();
    void thread_p_Val2_12_fu_599_p1();
    void thread_p_Val2_13_fu_1157_p0();
    void thread_p_Val2_13_fu_1157_p1();
    void thread_p_Val2_16_fu_828_p2();
    void thread_p_Val2_17_fu_849_p0();
    void thread_p_Val2_17_fu_849_p1();
    void thread_p_Val2_17_fu_849_p10();
    void thread_p_Val2_17_fu_849_p2();
    void thread_p_Val2_19_fu_902_p5();
    void thread_p_Val2_1_fu_785_p0();
    void thread_p_Val2_1_fu_785_p1();
    void thread_p_Val2_1_fu_785_p10();
    void thread_p_Val2_1_fu_785_p2();
    void thread_p_Val2_24_fu_379_p3();
    void thread_p_Val2_5_fu_1164_p1();
    void thread_p_Val2_5_fu_1164_p10();
    void thread_p_Val2_8_fu_394_p3();
    void thread_p_Val2_i_fu_389_p2();
    void thread_p_Val2_s_fu_250_p1();
    void thread_p_cast_cast_fu_1072_p3();
    void thread_p_i_fu_449_p2();
    void thread_r_V_3_fu_318_p2();
    void thread_r_V_fu_837_p2();
    void thread_ref_4oPi_table_100_V_address0();
    void thread_ref_4oPi_table_100_V_ce0();
    void thread_ret_V_3_fu_1099_p3();
    void thread_ret_V_4_fu_1136_p3();
    void thread_rhs_V_fu_891_p1();
    void thread_second_order_float_2_address0();
    void thread_second_order_float_2_ce0();
    void thread_second_order_float_3_address0();
    void thread_second_order_float_3_ce0();
    void thread_second_order_float_s_address0();
    void thread_second_order_float_s_ce0();
    void thread_sh_assign_1_cast5_fu_524_p1();
    void thread_sh_assign_1_cast_fu_527_p1();
    void thread_sh_assign_fu_506_p3();
    void thread_sh_cast_fu_488_p1();
    void thread_shift_1_i_fu_990_p3();
    void thread_shift_2_1_i_fu_984_p2();
    void thread_sin_basis_fu_618_p2();
    void thread_ssdm_int_V_write_ass_fu_548_p3();
    void thread_storemerge_i_fu_454_p3();
    void thread_tmp_10_fu_1046_p4();
    void thread_tmp_11_fu_1056_p4();
    void thread_tmp_12_fu_1065_p3();
    void thread_tmp_12_i_fu_1022_p2();
    void thread_tmp_15_fu_311_p1();
    void thread_tmp_15_i1_fu_914_p3();
    void thread_tmp_15_i_fu_461_p1();
    void thread_tmp_16_fu_385_p1();
    void thread_tmp_18_i_fu_479_p1();
    void thread_tmp_1_fu_296_p4();
    void thread_tmp_1_i_i_fu_315_p1();
    void thread_tmp_20_fu_1027_p1();
    void thread_tmp_20_i_fu_500_p2();
    void thread_tmp_21_i_fu_530_p1();
    void thread_tmp_22_fu_1043_p1();
    void thread_tmp_22_i_cast_fu_538_p1();
    void thread_tmp_22_i_fu_533_p2();
    void thread_tmp_23_i_fu_542_p2();
    void thread_tmp_29_1_i_fu_1030_p1();
    void thread_tmp_29_i1_fu_969_p1();
    void thread_tmp_32_1_i_fu_1034_p2();
    void thread_tmp_32_i_fu_972_p2();
    void thread_tmp_33_i_fu_978_p2();
    void thread_tmp_36_i_fu_632_p1();
    void thread_tmp_38_i_fu_822_p1();
    void thread_tmp_39_i_fu_825_p1();
    void thread_tmp_41_i_cast_fu_834_p1();
    void thread_tmp_4_fu_721_p3();
    void thread_tmp_5_fu_514_p2();
    void thread_tmp_6_fu_354_p2();
    void thread_tmp_7_fu_519_p2();
    void thread_tmp_8_fu_738_p2();
    void thread_tmp_9_fu_1086_p2();
    void thread_tmp_i14_i_fu_961_p3();
    void thread_tmp_i1_41_fu_895_p3();
    void thread_tmp_i2_cast_fu_1004_p1();
    void thread_tmp_i2_fu_998_p2();
    void thread_tmp_i2_i_fu_306_p1();
    void thread_tmp_i_i1_fu_943_p3();
    void thread_tmp_s_fu_576_p2();
    void thread_val_assign_fu_437_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif