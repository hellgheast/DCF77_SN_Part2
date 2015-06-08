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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN_Part2/KCPSM3/VHDL/bbfifo_16x8.vhd";



static void design_dcf_complete_a_0616549169_2111220564_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(269, ng0);

LAB3:    t1 = (t0 + 7496U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11504);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 11392);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_dcf_complete_a_0616549169_2111220564_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(270, ng0);

LAB3:    t1 = (t0 + 6696U);
    t2 = *((char **)t1);
    t3 = (3 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 11568);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 11408);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_dcf_complete_a_0616549169_2111220564_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(271, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11632);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 11424);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void design_dcf_complete_a_0616549169_2111220564_init()
{
	static char *pe[] = {(void *)design_dcf_complete_a_0616549169_2111220564_p_0,(void *)design_dcf_complete_a_0616549169_2111220564_p_1,(void *)design_dcf_complete_a_0616549169_2111220564_p_2};
	xsi_register_didat("design_dcf_complete_a_0616549169_2111220564", "isim/DCF77_Receiver_tb_isim.exe.sim/design_dcf_complete/a_0616549169_2111220564.didat");
	xsi_register_executes(pe);
}
