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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/kcpsm3.vhd";



static void design_a_0962375630_2111220564_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(187, ng0);

LAB3:    t1 = (t0 + 36648U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 61680);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 61552);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_a_0962375630_2111220564_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(188, ng0);

LAB3:    t1 = (t0 + 36808U);
    t2 = *((char **)t1);
    t1 = (t0 + 61744);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 61568);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_a_0962375630_2111220564_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(189, ng0);

LAB3:    t1 = (t0 + 38088U);
    t2 = *((char **)t1);
    t1 = (t0 + 61808);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 61584);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_a_0962375630_2111220564_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(190, ng0);

LAB3:    t1 = (t0 + 38888U);
    t2 = *((char **)t1);
    t1 = (t0 + 61872);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 61600);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void design_a_0962375630_2111220564_init()
{
	static char *pe[] = {(void *)design_a_0962375630_2111220564_p_0,(void *)design_a_0962375630_2111220564_p_1,(void *)design_a_0962375630_2111220564_p_2,(void *)design_a_0962375630_2111220564_p_3};
	xsi_register_didat("design_a_0962375630_2111220564", "isim/DCF77_Receiver_tb_isim.exe.sim/design/a_0962375630_2111220564.didat");
	xsi_register_executes(pe);
}
