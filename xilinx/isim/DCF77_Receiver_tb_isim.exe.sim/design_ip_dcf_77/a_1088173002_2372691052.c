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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/DecodeStateMachine.vhd";



static void design_ip_dcf_77_a_1088173002_2372691052_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    int t12;
    int t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1672U);
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
LAB3:    t1 = (t0 + 5128);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 3088U);
    t5 = *((char **)t1);
    t1 = (t0 + 5240);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t2 = (t0 + 3088U);
    t7 = *((char **)t2);
    t12 = xsi_mem_cmp(t7, t6, 2U);
    if (t12 == 1)
        goto LAB11;

LAB15:    t2 = (t0 + 3208U);
    t8 = *((char **)t2);
    t13 = xsi_mem_cmp(t8, t6, 2U);
    if (t13 == 1)
        goto LAB12;

LAB16:    t2 = (t0 + 3328U);
    t9 = *((char **)t2);
    t14 = xsi_mem_cmp(t9, t6, 2U);
    if (t14 == 1)
        goto LAB13;

LAB17:
LAB14:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB11:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5368);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB25;

LAB27:
LAB26:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB28;

LAB30:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB31;

LAB32:
LAB29:
LAB20:    goto LAB10;

LAB12:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB10;

LAB13:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9681);
    t4 = 1;
    if (8U == 8U)
        goto LAB45;

LAB46:    t4 = 0;

LAB47:    if (t4 == 1)
        goto LAB42;

LAB43:    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t8 = (t0 + 9689);
    t10 = 1;
    if (8U == 8U)
        goto LAB51;

LAB52:    t10 = 0;

LAB53:    t3 = t10;

LAB44:    if (t3 != 0)
        goto LAB39;

LAB41:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9697);
    t4 = 1;
    if (8U == 8U)
        goto LAB62;

LAB63:    t4 = 0;

LAB64:    if (t4 == 1)
        goto LAB59;

LAB60:    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t8 = (t0 + 9705);
    t10 = 1;
    if (8U == 8U)
        goto LAB68;

LAB69:    t10 = 0;

LAB70:    t3 = t10;

LAB61:    if (t3 != 0)
        goto LAB57;

LAB58:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB40:    goto LAB10;

LAB18:;
LAB19:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3088U);
    t6 = *((char **)t1);
    t1 = (t0 + 5240);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    memcpy(t15, t6, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t19 = (t11 == (unsigned char)2);
    t3 = t19;
    goto LAB24;

LAB25:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 5304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3088U);
    t5 = *((char **)t1);
    t1 = (t0 + 5240);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

LAB31:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t0 + 5240);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

LAB33:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB37:    goto LAB34;

LAB36:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 5496);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 5368);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB37;

LAB39:    xsi_set_current_line(119, ng0);
    t18 = (t0 + 5432);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB42:    t3 = (unsigned char)1;
    goto LAB44;

LAB45:    t20 = 0;

LAB48:    if (t20 < 8U)
        goto LAB49;
    else
        goto LAB47;

LAB49:    t6 = (t2 + t20);
    t7 = (t1 + t20);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB46;

LAB50:    t20 = (t20 + 1);
    goto LAB48;

LAB51:    t21 = 0;

LAB54:    if (t21 < 8U)
        goto LAB55;
    else
        goto LAB53;

LAB55:    t16 = (t9 + t21);
    t17 = (t8 + t21);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB52;

LAB56:    t21 = (t21 + 1);
    goto LAB54;

LAB57:    xsi_set_current_line(122, ng0);
    t18 = (t0 + 5432);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB59:    t3 = (unsigned char)1;
    goto LAB61;

LAB62:    t20 = 0;

LAB65:    if (t20 < 8U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t6 = (t2 + t20);
    t7 = (t1 + t20);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB63;

LAB67:    t20 = (t20 + 1);
    goto LAB65;

LAB68:    t21 = 0;

LAB71:    if (t21 < 8U)
        goto LAB72;
    else
        goto LAB70;

LAB72:    t16 = (t9 + t21);
    t17 = (t8 + t21);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB69;

LAB73:    t21 = (t21 + 1);
    goto LAB71;

}

static void design_ip_dcf_77_a_1088173002_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(137, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5560);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5144);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_1088173002_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(138, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5160);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void design_ip_dcf_77_a_1088173002_2372691052_init()
{
	static char *pe[] = {(void *)design_ip_dcf_77_a_1088173002_2372691052_p_0,(void *)design_ip_dcf_77_a_1088173002_2372691052_p_1,(void *)design_ip_dcf_77_a_1088173002_2372691052_p_2};
	xsi_register_didat("design_ip_dcf_77_a_1088173002_2372691052", "isim/DCF77_Receiver_tb_isim.exe.sim/design_ip_dcf_77/a_1088173002_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 4);
}
