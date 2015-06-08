/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/vincent.meier/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/frame_register.vhd";



static void design_ip_dcf_77_a_4056340442_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    int t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    int t43;
    char *t44;
    int t46;
    char *t47;
    int t49;
    char *t50;
    int t52;
    char *t53;
    int t55;
    char *t56;
    int t58;
    char *t59;
    int t61;
    char *t62;
    int t64;
    char *t65;
    int t67;
    char *t68;
    int t70;
    char *t71;
    int t73;
    char *t74;
    int t76;
    char *t77;
    int t79;
    char *t80;
    int t82;
    char *t83;
    int t85;
    char *t86;
    int t88;
    char *t89;
    int t91;
    char *t92;
    int t94;
    char *t95;
    int t97;
    char *t98;
    int t100;
    char *t101;
    int t103;
    char *t104;
    int t106;
    char *t107;
    int t109;
    char *t110;
    int t112;
    char *t113;
    int t115;
    char *t116;
    int t118;
    char *t119;
    int t121;
    char *t122;
    int t124;
    char *t125;
    int t127;
    char *t128;
    int t130;
    char *t131;
    int t133;
    char *t134;
    char *t135;
    unsigned char t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;

LAB0:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1472U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8584);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 16013);
    t6 = (t0 + 8808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 16021);
    t5 = (t0 + 8872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 16037);
    t5 = (t0 + 8936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 16041);
    t5 = (t0 + 9000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 16047);
    t5 = (t0 + 9064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 16054);
    t5 = (t0 + 9128);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 16060);
    t5 = (t0 + 9192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 16063);
    t5 = (t0 + 9256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 16069);
    t5 = (t0 + 9320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t2 = (t0 + 16077);
    t13 = xsi_mem_cmp(t2, t6, 6U);
    if (t13 == 1)
        goto LAB11;

LAB54:    t8 = (t0 + 16083);
    t14 = xsi_mem_cmp(t8, t6, 6U);
    if (t14 == 1)
        goto LAB12;

LAB55:    t10 = (t0 + 16089);
    t16 = xsi_mem_cmp(t10, t6, 6U);
    if (t16 == 1)
        goto LAB13;

LAB56:    t17 = (t0 + 16095);
    t19 = xsi_mem_cmp(t17, t6, 6U);
    if (t19 == 1)
        goto LAB14;

LAB57:    t20 = (t0 + 16101);
    t22 = xsi_mem_cmp(t20, t6, 6U);
    if (t22 == 1)
        goto LAB15;

LAB58:    t23 = (t0 + 16107);
    t25 = xsi_mem_cmp(t23, t6, 6U);
    if (t25 == 1)
        goto LAB16;

LAB59:    t26 = (t0 + 16113);
    t28 = xsi_mem_cmp(t26, t6, 6U);
    if (t28 == 1)
        goto LAB17;

LAB60:    t29 = (t0 + 16119);
    t31 = xsi_mem_cmp(t29, t6, 6U);
    if (t31 == 1)
        goto LAB18;

LAB61:    t32 = (t0 + 16125);
    t34 = xsi_mem_cmp(t32, t6, 6U);
    if (t34 == 1)
        goto LAB19;

LAB62:    t35 = (t0 + 16131);
    t37 = xsi_mem_cmp(t35, t6, 6U);
    if (t37 == 1)
        goto LAB20;

LAB63:    t38 = (t0 + 16137);
    t40 = xsi_mem_cmp(t38, t6, 6U);
    if (t40 == 1)
        goto LAB21;

LAB64:    t41 = (t0 + 16143);
    t43 = xsi_mem_cmp(t41, t6, 6U);
    if (t43 == 1)
        goto LAB22;

LAB65:    t44 = (t0 + 16149);
    t46 = xsi_mem_cmp(t44, t6, 6U);
    if (t46 == 1)
        goto LAB23;

LAB66:    t47 = (t0 + 16155);
    t49 = xsi_mem_cmp(t47, t6, 6U);
    if (t49 == 1)
        goto LAB24;

LAB67:    t50 = (t0 + 16161);
    t52 = xsi_mem_cmp(t50, t6, 6U);
    if (t52 == 1)
        goto LAB25;

LAB68:    t53 = (t0 + 16167);
    t55 = xsi_mem_cmp(t53, t6, 6U);
    if (t55 == 1)
        goto LAB26;

LAB69:    t56 = (t0 + 16173);
    t58 = xsi_mem_cmp(t56, t6, 6U);
    if (t58 == 1)
        goto LAB27;

LAB70:    t59 = (t0 + 16179);
    t61 = xsi_mem_cmp(t59, t6, 6U);
    if (t61 == 1)
        goto LAB28;

LAB71:    t62 = (t0 + 16185);
    t64 = xsi_mem_cmp(t62, t6, 6U);
    if (t64 == 1)
        goto LAB29;

LAB72:    t65 = (t0 + 16191);
    t67 = xsi_mem_cmp(t65, t6, 6U);
    if (t67 == 1)
        goto LAB30;

LAB73:    t68 = (t0 + 16197);
    t70 = xsi_mem_cmp(t68, t6, 6U);
    if (t70 == 1)
        goto LAB31;

LAB74:    t71 = (t0 + 16203);
    t73 = xsi_mem_cmp(t71, t6, 6U);
    if (t73 == 1)
        goto LAB32;

LAB75:    t74 = (t0 + 16209);
    t76 = xsi_mem_cmp(t74, t6, 6U);
    if (t76 == 1)
        goto LAB33;

LAB76:    t77 = (t0 + 16215);
    t79 = xsi_mem_cmp(t77, t6, 6U);
    if (t79 == 1)
        goto LAB34;

LAB77:    t80 = (t0 + 16221);
    t82 = xsi_mem_cmp(t80, t6, 6U);
    if (t82 == 1)
        goto LAB35;

LAB78:    t83 = (t0 + 16227);
    t85 = xsi_mem_cmp(t83, t6, 6U);
    if (t85 == 1)
        goto LAB36;

LAB79:    t86 = (t0 + 16233);
    t88 = xsi_mem_cmp(t86, t6, 6U);
    if (t88 == 1)
        goto LAB37;

LAB80:    t89 = (t0 + 16239);
    t91 = xsi_mem_cmp(t89, t6, 6U);
    if (t91 == 1)
        goto LAB38;

LAB81:    t92 = (t0 + 16245);
    t94 = xsi_mem_cmp(t92, t6, 6U);
    if (t94 == 1)
        goto LAB39;

LAB82:    t95 = (t0 + 16251);
    t97 = xsi_mem_cmp(t95, t6, 6U);
    if (t97 == 1)
        goto LAB40;

LAB83:    t98 = (t0 + 16257);
    t100 = xsi_mem_cmp(t98, t6, 6U);
    if (t100 == 1)
        goto LAB41;

LAB84:    t101 = (t0 + 16263);
    t103 = xsi_mem_cmp(t101, t6, 6U);
    if (t103 == 1)
        goto LAB42;

LAB85:    t104 = (t0 + 16269);
    t106 = xsi_mem_cmp(t104, t6, 6U);
    if (t106 == 1)
        goto LAB43;

LAB86:    t107 = (t0 + 16275);
    t109 = xsi_mem_cmp(t107, t6, 6U);
    if (t109 == 1)
        goto LAB44;

LAB87:    t110 = (t0 + 16281);
    t112 = xsi_mem_cmp(t110, t6, 6U);
    if (t112 == 1)
        goto LAB45;

LAB88:    t113 = (t0 + 16287);
    t115 = xsi_mem_cmp(t113, t6, 6U);
    if (t115 == 1)
        goto LAB46;

LAB89:    t116 = (t0 + 16293);
    t118 = xsi_mem_cmp(t116, t6, 6U);
    if (t118 == 1)
        goto LAB47;

LAB90:    t119 = (t0 + 16299);
    t121 = xsi_mem_cmp(t119, t6, 6U);
    if (t121 == 1)
        goto LAB48;

LAB91:    t122 = (t0 + 16305);
    t124 = xsi_mem_cmp(t122, t6, 6U);
    if (t124 == 1)
        goto LAB49;

LAB92:    t125 = (t0 + 16311);
    t127 = xsi_mem_cmp(t125, t6, 6U);
    if (t127 == 1)
        goto LAB50;

LAB93:    t128 = (t0 + 16317);
    t130 = xsi_mem_cmp(t128, t6, 6U);
    if (t130 == 1)
        goto LAB51;

LAB94:    t131 = (t0 + 16323);
    t133 = xsi_mem_cmp(t131, t6, 6U);
    if (t133 == 1)
        goto LAB52;

LAB95:
LAB53:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 8808);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_delta(t1, 6U, 2U, 0LL);

LAB10:    goto LAB3;

LAB7:    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB11:    xsi_set_current_line(87, ng0);
    t134 = (t0 + 1352U);
    t135 = *((char **)t134);
    t136 = *((unsigned char *)t135);
    t134 = (t0 + 8936);
    t137 = (t134 + 56U);
    t138 = *((char **)t137);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    *((unsigned char *)t140) = t136;
    xsi_driver_first_trans_delta(t134, 1U, 1, 0LL);
    goto LAB10;

LAB12:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB10;

LAB13:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB10;

LAB14:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB10;

LAB15:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9064);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    goto LAB10;

LAB16:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9064);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB10;

LAB17:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9064);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB10;

LAB18:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9064);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB10;

LAB19:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9064);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB10;

LAB20:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9064);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB10;

LAB21:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9064);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB10;

LAB22:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8808);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB10;

LAB23:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9000);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB10;

LAB24:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9000);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB10;

LAB25:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9000);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB10;

LAB26:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9000);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB10;

LAB27:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9000);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB10;

LAB28:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9000);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB10;

LAB29:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8808);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB10;

LAB30:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9128);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB10;

LAB31:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9128);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB10;

LAB32:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9128);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB10;

LAB33:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9128);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB10;

LAB34:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9128);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB10;

LAB35:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9128);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB10;

LAB36:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB10;

LAB37:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB10;

LAB38:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB10;

LAB39:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9256);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB10;

LAB40:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9256);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB10;

LAB41:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9256);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB10;

LAB42:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9256);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB10;

LAB43:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9256);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB10;

LAB44:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);
    goto LAB10;

LAB45:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    goto LAB10;

LAB46:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB10;

LAB47:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB10;

LAB48:    xsi_set_current_line(200, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB10;

LAB49:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB10;

LAB50:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB10;

LAB51:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB10;

LAB52:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8808);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB10;

LAB96:;
}

static void design_ip_dcf_77_a_4056340442_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(225, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8600);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_4056340442_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(226, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 9448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8616);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_4056340442_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(227, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 9512);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 3U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8632);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_4056340442_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(228, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 9576);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8648);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_4056340442_2372691052_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(229, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 9640);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8664);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_4056340442_2372691052_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(230, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 9704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 7U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8680);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_4056340442_2372691052_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(231, ng0);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t1 = (t0 + 9768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8696);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_4056340442_2372691052_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(232, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 9832);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8712);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_4056340442_2372691052_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(233, ng0);

LAB3:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 9896);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8728);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void design_ip_dcf_77_a_4056340442_2372691052_init()
{
	static char *pe[] = {(void *)design_ip_dcf_77_a_4056340442_2372691052_p_0,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_1,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_2,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_3,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_4,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_5,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_6,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_7,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_8,(void *)design_ip_dcf_77_a_4056340442_2372691052_p_9};
	xsi_register_didat("design_ip_dcf_77_a_4056340442_2372691052", "isim/DCF77_Receiver_tb_isim.exe.sim/design_ip_dcf_77/a_4056340442_2372691052.didat");
	xsi_register_executes(pe);
}
