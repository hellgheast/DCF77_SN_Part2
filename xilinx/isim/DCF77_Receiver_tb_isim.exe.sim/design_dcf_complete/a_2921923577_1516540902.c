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
static const char *ng0 = "C:/Users/vincent.meier/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/DecodeAdress.vhd";



static void design_dcf_complete_a_2921923577_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 6200);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 6008);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_dcf_complete_a_2921923577_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    int t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t5 = xsi_mem_cmp(t4, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t2 = (t0 + 2728U);
    t6 = *((char **)t2);
    t7 = xsi_mem_cmp(t6, t3, 4U);
    if (t7 == 1)
        goto LAB6;

LAB10:    t2 = (t0 + 2968U);
    t8 = *((char **)t2);
    t9 = xsi_mem_cmp(t8, t3, 4U);
    if (t9 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 10752);
    t4 = (t0 + 6264);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t4);

LAB4:    xsi_set_current_line(60, ng0);

LAB15:    t2 = (t0 + 6024);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 10743);
    t11 = (t0 + 6264);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 3U);
    xsi_driver_first_trans_fast(t11);
    goto LAB4;

LAB6:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 10746);
    t4 = (t0 + 6264);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 10749);
    t4 = (t0 + 6264);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 6024);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void design_dcf_complete_a_2921923577_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t5 = xsi_mem_cmp(t4, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 10755);
    t4 = (t0 + 6328);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(67, ng0);

LAB11:    t2 = (t0 + 6040);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t7 = (7 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 6328);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 6040);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void design_dcf_complete_a_2921923577_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2848U);
    t4 = *((char **)t2);
    t5 = xsi_mem_cmp(t4, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 10759);
    t4 = (t0 + 6392);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(72, ng0);

LAB11:    t2 = (t0 + 6056);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t7 = (7 - 1);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 6392);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 2U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 6056);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void design_dcf_complete_a_2921923577_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t5 = xsi_mem_cmp(t4, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 10761);
    t4 = (t0 + 6456);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(77, ng0);

LAB11:    t2 = (t0 + 6072);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t7 = (7 - 2);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 6456);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 3U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 6072);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void design_dcf_complete_a_2921923577_1516540902_p_5(char *t0)
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

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6520);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 6088);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_dcf_complete_a_2921923577_1516540902_p_6(char *t0)
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

LAB0:    xsi_set_current_line(84, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (1 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6584);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 6104);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_dcf_complete_a_2921923577_1516540902_p_7(char *t0)
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

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (0 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6648);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 6120);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void design_dcf_complete_a_2921923577_1516540902_init()
{
	static char *pe[] = {(void *)design_dcf_complete_a_2921923577_1516540902_p_0,(void *)design_dcf_complete_a_2921923577_1516540902_p_1,(void *)design_dcf_complete_a_2921923577_1516540902_p_2,(void *)design_dcf_complete_a_2921923577_1516540902_p_3,(void *)design_dcf_complete_a_2921923577_1516540902_p_4,(void *)design_dcf_complete_a_2921923577_1516540902_p_5,(void *)design_dcf_complete_a_2921923577_1516540902_p_6,(void *)design_dcf_complete_a_2921923577_1516540902_p_7};
	xsi_register_didat("design_dcf_complete_a_2921923577_1516540902", "isim/DCF77_Receiver_tb_isim.exe.sim/design_dcf_complete/a_2921923577_1516540902.didat");
	xsi_register_executes(pe);
}
