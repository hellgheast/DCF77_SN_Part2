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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/BCD_7Seg_Converter.vhd";



static void design_dcf_complete_a_3186406764_1516540902_p_0(char *t0)
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    int t38;
    char *t39;
    int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(7U);
    memset(t1, 0, 7U);
    t5 = t1;
    memset(t5, (unsigned char)2, 7U);
    t6 = (t0 + 3232);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 7U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(7U);
    memset(t1, 0, 7U);
    t2 = t1;
    memset(t2, (unsigned char)2, 7U);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t13 = (7 - 7);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t2 = (t6 + t15);
    t7 = (t0 + 5706);
    t16 = xsi_mem_cmp(t7, t2, 4U);
    if (t16 == 1)
        goto LAB11;

LAB22:    t9 = (t0 + 5710);
    t17 = xsi_mem_cmp(t9, t2, 4U);
    if (t17 == 1)
        goto LAB12;

LAB23:    t18 = (t0 + 5714);
    t20 = xsi_mem_cmp(t18, t2, 4U);
    if (t20 == 1)
        goto LAB13;

LAB24:    t21 = (t0 + 5718);
    t23 = xsi_mem_cmp(t21, t2, 4U);
    if (t23 == 1)
        goto LAB14;

LAB25:    t24 = (t0 + 5722);
    t26 = xsi_mem_cmp(t24, t2, 4U);
    if (t26 == 1)
        goto LAB15;

LAB26:    t27 = (t0 + 5726);
    t29 = xsi_mem_cmp(t27, t2, 4U);
    if (t29 == 1)
        goto LAB16;

LAB27:    t30 = (t0 + 5730);
    t32 = xsi_mem_cmp(t30, t2, 4U);
    if (t32 == 1)
        goto LAB17;

LAB28:    t33 = (t0 + 5734);
    t35 = xsi_mem_cmp(t33, t2, 4U);
    if (t35 == 1)
        goto LAB18;

LAB29:    t36 = (t0 + 5738);
    t38 = xsi_mem_cmp(t36, t2, 4U);
    if (t38 == 1)
        goto LAB19;

LAB30:    t39 = (t0 + 5742);
    t41 = xsi_mem_cmp(t39, t2, 4U);
    if (t41 == 1)
        goto LAB20;

LAB31:
LAB21:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 5816);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB10:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t13 = (7 - 3);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t5 = (t0 + 5823);
    t16 = xsi_mem_cmp(t5, t1, 4U);
    if (t16 == 1)
        goto LAB34;

LAB45:    t7 = (t0 + 5827);
    t17 = xsi_mem_cmp(t7, t1, 4U);
    if (t17 == 1)
        goto LAB35;

LAB46:    t9 = (t0 + 5831);
    t20 = xsi_mem_cmp(t9, t1, 4U);
    if (t20 == 1)
        goto LAB36;

LAB47:    t18 = (t0 + 5835);
    t23 = xsi_mem_cmp(t18, t1, 4U);
    if (t23 == 1)
        goto LAB37;

LAB48:    t21 = (t0 + 5839);
    t26 = xsi_mem_cmp(t21, t1, 4U);
    if (t26 == 1)
        goto LAB38;

LAB49:    t24 = (t0 + 5843);
    t29 = xsi_mem_cmp(t24, t1, 4U);
    if (t29 == 1)
        goto LAB39;

LAB50:    t27 = (t0 + 5847);
    t32 = xsi_mem_cmp(t27, t1, 4U);
    if (t32 == 1)
        goto LAB40;

LAB51:    t30 = (t0 + 5851);
    t35 = xsi_mem_cmp(t30, t1, 4U);
    if (t35 == 1)
        goto LAB41;

LAB52:    t33 = (t0 + 5855);
    t38 = xsi_mem_cmp(t33, t1, 4U);
    if (t38 == 1)
        goto LAB42;

LAB53:    t36 = (t0 + 5859);
    t41 = xsi_mem_cmp(t36, t1, 4U);
    if (t41 == 1)
        goto LAB43;

LAB54:
LAB44:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5933);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB33:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB11:    xsi_set_current_line(60, ng0);
    t42 = (t0 + 5746);
    t44 = (t0 + 3296);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memcpy(t48, t42, 7U);
    xsi_driver_first_trans_fast_port(t44);
    goto LAB10;

LAB12:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 5753);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB13:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 5760);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB14:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 5767);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB15:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 5774);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB16:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 5781);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB17:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 5788);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB18:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 5795);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB19:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5802);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB20:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 5809);
    t5 = (t0 + 3296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB32:;
LAB34:    xsi_set_current_line(75, ng0);
    t39 = (t0 + 5863);
    t42 = (t0 + 3232);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t39, 7U);
    xsi_driver_first_trans_fast_port(t42);
    goto LAB33;

LAB35:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 5870);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB36:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 5877);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB37:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5884);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB38:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5891);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB39:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 5898);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB40:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 5905);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB41:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 5912);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB42:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5919);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB43:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 5926);
    t5 = (t0 + 3232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB33;

LAB55:;
}


extern void design_dcf_complete_a_3186406764_1516540902_init()
{
	static char *pe[] = {(void *)design_dcf_complete_a_3186406764_1516540902_p_0};
	xsi_register_didat("design_dcf_complete_a_3186406764_1516540902", "isim/DCF77_Receiver_tb_isim.exe.sim/design_dcf_complete/a_3186406764_1516540902.didat");
	xsi_register_executes(pe);
}
