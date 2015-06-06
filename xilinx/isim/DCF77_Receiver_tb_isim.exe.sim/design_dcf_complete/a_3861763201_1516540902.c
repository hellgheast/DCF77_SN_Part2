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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/BaudRateCounter.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );


static void design_dcf_complete_a_3861763201_1516540902_p_0(char *t0)
{
    char t25[16];
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
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    char *t24;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
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
LAB3:    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 3392);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB10;

LAB12:    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t15 = *((unsigned char *)t7);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB13;

LAB14:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    goto LAB11;

LAB13:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1512U);
    t8 = *((char **)t2);
    t17 = *((unsigned char *)t8);
    t18 = (t17 == (unsigned char)2);
    if (t18 != 0)
        goto LAB15;

LAB17:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB19:
LAB16:    goto LAB11;

LAB15:    xsi_set_current_line(63, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t9 = t2;
    memset(t9, (unsigned char)2, 8U);
    t10 = (t0 + 3392);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB16;

LAB18:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 5844);
    t11 = 1;
    if (8U == 8U)
        goto LAB23;

LAB24:    t11 = 0;

LAB25:    if (t11 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5808U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t25, t2, t1, 1);
    t6 = (t0 + 3392);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB21:    goto LAB16;

LAB20:    xsi_set_current_line(67, ng0);
    t9 = xsi_get_transient_memory(8U);
    memset(t9, 0, 8U);
    t10 = t9;
    memset(t10, (unsigned char)2, 8U);
    t19 = (t0 + 3392);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    memcpy(t24, t9, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB23:    t23 = 0;

LAB26:    if (t23 < 8U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t7 = (t5 + t23);
    t8 = (t1 + t23);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB24;

LAB28:    t23 = (t23 + 1);
    goto LAB26;

}


extern void design_dcf_complete_a_3861763201_1516540902_init()
{
	static char *pe[] = {(void *)design_dcf_complete_a_3861763201_1516540902_p_0};
	xsi_register_didat("design_dcf_complete_a_3861763201_1516540902", "isim/DCF77_Receiver_tb_isim.exe.sim/design_dcf_complete/a_3861763201_1516540902.didat");
	xsi_register_executes(pe);
}
