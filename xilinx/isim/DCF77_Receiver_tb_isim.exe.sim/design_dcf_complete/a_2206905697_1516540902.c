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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/mux_dcf_test.vhd";
extern char *IEEE_P_2592010699;



static void design_dcf_complete_a_2206905697_1516540902_p_0(char *t0)
{
    char t17[16];
    char t19[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 2992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5796);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB8:    t6 = (t0 + 5798);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB9:
LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 3392);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);

LAB4:    xsi_set_current_line(49, ng0);

LAB17:    t2 = (t0 + 3312);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng0);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t11 = (7 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 1032U);
    t15 = *((char **)t14);
    t16 = *((unsigned char *)t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 7;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t22 = (1 - 7);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t14 = xsi_base_array_concat(t14, t17, t18, (char)97, t9, t19, (char)99, t16, (char)101);
    t23 = (7U + 1U);
    t24 = (8U != t23);
    if (t24 == 1)
        goto LAB11;

LAB12:    t21 = (t0 + 3392);
    t25 = (t21 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t14, 8U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB4;

LAB6:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t11 = (7 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t16 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 4024);
    t9 = (t19 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 7;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t5 = (1 - 7);
    t23 = (t5 * -1);
    t23 = (t23 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t23;
    t4 = xsi_base_array_concat(t4, t17, t7, (char)97, t2, t19, (char)99, t16, (char)101);
    t23 = (7U + 1U);
    t24 = (8U != t23);
    if (t24 == 1)
        goto LAB13;

LAB14:    t10 = (t0 + 3392);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t4, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB10:;
LAB11:    xsi_size_not_matching(8U, t23, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(8U, t23, 0);
    goto LAB14;

LAB15:    t3 = (t0 + 3312);
    *((int *)t3) = 0;
    goto LAB2;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

}


extern void design_dcf_complete_a_2206905697_1516540902_init()
{
	static char *pe[] = {(void *)design_dcf_complete_a_2206905697_1516540902_p_0};
	xsi_register_didat("design_dcf_complete_a_2206905697_1516540902", "isim/DCF77_Receiver_tb_isim.exe.sim/design_dcf_complete/a_2206905697_1516540902.didat");
	xsi_register_executes(pe);
}
