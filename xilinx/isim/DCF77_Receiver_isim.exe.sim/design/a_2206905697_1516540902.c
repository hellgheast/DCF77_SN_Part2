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



static void design_a_2206905697_1516540902_p_0(char *t0)
{
    char t14[16];
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5515);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 3232);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);

LAB4:    xsi_set_current_line(48, ng0);

LAB13:    t2 = (t0 + 3152);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t8 = (7 - 7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t6 = (t7 + t10);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t15 = ((IEEE_P_2592010699) + 4024);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 7;
    t18 = (t17 + 4U);
    *((int *)t18) = 1;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (1 - 7);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t11 = xsi_base_array_concat(t11, t14, t15, (char)97, t6, t16, (char)99, t13, (char)101);
    t20 = (7U + 1U);
    t21 = (8U != t20);
    if (t21 == 1)
        goto LAB9;

LAB10:    t18 = (t0 + 3232);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t11, 8U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB4;

LAB8:;
LAB9:    xsi_size_not_matching(8U, t20, 0);
    goto LAB10;

LAB11:    t3 = (t0 + 3152);
    *((int *)t3) = 0;
    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}


extern void design_a_2206905697_1516540902_init()
{
	static char *pe[] = {(void *)design_a_2206905697_1516540902_p_0};
	xsi_register_didat("design_a_2206905697_1516540902", "isim/DCF77_Receiver_isim.exe.sim/design/a_2206905697_1516540902.didat");
	xsi_register_executes(pe);
}
