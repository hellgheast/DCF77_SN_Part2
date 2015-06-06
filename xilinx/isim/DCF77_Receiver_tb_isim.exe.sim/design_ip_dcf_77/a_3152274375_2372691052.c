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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/reg_mem_dcf77.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_853553178_503743352(char *, unsigned char , unsigned char );


static void design_ip_dcf_77_a_3152274375_2372691052_p_0(char *t0)
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
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1952U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 9232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(90, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 9392);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 9456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 9520);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5032U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t2 = (t0 + 5728U);
    t8 = *((char **)t2);
    t15 = xsi_mem_cmp(t8, t7, 4U);
    if (t15 == 1)
        goto LAB14;

LAB17:    t2 = (t0 + 5848U);
    t9 = *((char **)t2);
    t16 = xsi_mem_cmp(t9, t7, 4U);
    if (t16 == 1)
        goto LAB15;

LAB18:
LAB16:    xsi_set_current_line(102, ng0);

LAB13:    goto LAB11;

LAB14:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2152U);
    t10 = *((char **)t2);
    t2 = (t0 + 9392);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t10, 8U);
    xsi_driver_first_trans_delta(t2, 8U, 8U, 0LL);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 9456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB15:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 9392);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 0U, 8U, 0LL);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 9520);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB19:;
}

static void design_ip_dcf_77_a_3152274375_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(109, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 9584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9248);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_3152274375_2372691052_p_2(char *t0)
{
    char t30[16];
    char t32[16];
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
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t28;
    char *t29;
    char *t31;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned char t44;

LAB0:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(115, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 9648);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488U);
    t5 = *((char **)t1);
    t11 = xsi_mem_cmp(t5, t2, 4U);
    if (t11 == 1)
        goto LAB6;

LAB18:    t1 = (t0 + 5608U);
    t6 = *((char **)t1);
    t12 = xsi_mem_cmp(t6, t2, 4U);
    if (t12 == 1)
        goto LAB7;

LAB19:    t1 = (t0 + 5728U);
    t7 = *((char **)t1);
    t13 = xsi_mem_cmp(t7, t2, 4U);
    if (t13 == 1)
        goto LAB8;

LAB20:    t1 = (t0 + 5848U);
    t8 = *((char **)t1);
    t14 = xsi_mem_cmp(t8, t2, 4U);
    if (t14 == 1)
        goto LAB9;

LAB21:    t1 = (t0 + 5968U);
    t9 = *((char **)t1);
    t15 = xsi_mem_cmp(t9, t2, 4U);
    if (t15 == 1)
        goto LAB10;

LAB22:    t1 = (t0 + 6088U);
    t10 = *((char **)t1);
    t16 = xsi_mem_cmp(t10, t2, 4U);
    if (t16 == 1)
        goto LAB11;

LAB23:    t1 = (t0 + 6208U);
    t17 = *((char **)t1);
    t18 = xsi_mem_cmp(t17, t2, 4U);
    if (t18 == 1)
        goto LAB12;

LAB24:    t1 = (t0 + 6328U);
    t19 = *((char **)t1);
    t20 = xsi_mem_cmp(t19, t2, 4U);
    if (t20 == 1)
        goto LAB13;

LAB25:    t1 = (t0 + 6448U);
    t21 = *((char **)t1);
    t22 = xsi_mem_cmp(t21, t2, 4U);
    if (t22 == 1)
        goto LAB14;

LAB26:    t1 = (t0 + 6568U);
    t23 = *((char **)t1);
    t24 = xsi_mem_cmp(t23, t2, 4U);
    if (t24 == 1)
        goto LAB15;

LAB27:    t1 = (t0 + 6688U);
    t25 = *((char **)t1);
    t26 = xsi_mem_cmp(t25, t2, 4U);
    if (t26 == 1)
        goto LAB16;

LAB28:
LAB17:    xsi_set_current_line(143, ng0);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 17126);
    t28 = (t0 + 3752U);
    t29 = *((char **)t28);
    t31 = ((IEEE_P_2592010699) + 4024);
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 0;
    t34 = (t33 + 4U);
    *((int *)t34) = 1;
    t34 = (t33 + 8U);
    *((int *)t34) = 1;
    t35 = (1 - 0);
    t36 = (t35 * 1);
    t36 = (t36 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t36;
    t34 = (t0 + 16740U);
    t28 = xsi_base_array_concat(t28, t30, t31, (char)97, t1, t32, (char)97, t29, t34, (char)101);
    t36 = (2U + 6U);
    t3 = (8U != t36);
    if (t3 == 1)
        goto LAB30;

LAB31:    t37 = (t0 + 9648);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t28, 8U);
    xsi_driver_first_trans_fast_port(t37);
    goto LAB5;

LAB7:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 9648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t11 = (4 - 7);
    t36 = (t11 * -1);
    t42 = (1U * t36);
    t43 = (0 + t42);
    t1 = (t5 + t43);
    t4 = *((unsigned char *)t1);
    t44 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t6 = (t0 + 9648);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t44;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t11 = (3 - 7);
    t36 = (t11 * -1);
    t42 = (1U * t36);
    t43 = (0 + t42);
    t1 = (t5 + t43);
    t4 = *((unsigned char *)t1);
    t44 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t6 = (t0 + 9648);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t44;
    xsi_driver_first_trans_delta(t6, 1U, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t11 = (2 - 7);
    t36 = (t11 * -1);
    t42 = (1U * t36);
    t43 = (0 + t42);
    t1 = (t5 + t43);
    t4 = *((unsigned char *)t1);
    t44 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t6 = (t0 + 9648);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t44;
    xsi_driver_first_trans_delta(t6, 2U, 1, 0LL);
    goto LAB5;

LAB8:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t36 = (15 - 7);
    t42 = (t36 * 1U);
    t43 = (0 + t42);
    t1 = (t2 + t43);
    t5 = (t0 + 9648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB5;

LAB9:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t36 = (15 - 15);
    t42 = (t36 * 1U);
    t43 = (0 + t42);
    t1 = (t2 + t43);
    t5 = (t0 + 9648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB5;

LAB10:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 17128);
    t5 = (t0 + 3112U);
    t6 = *((char **)t5);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t32 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t11 = (3 - 0);
    t36 = (t11 * 1);
    t36 = (t36 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t36;
    t9 = (t0 + 16676U);
    t5 = xsi_base_array_concat(t5, t30, t7, (char)97, t1, t32, (char)97, t6, t9, (char)101);
    t36 = (4U + 4U);
    t3 = (8U != t36);
    if (t3 == 1)
        goto LAB32;

LAB33:    t10 = (t0 + 9648);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t5, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB5;

LAB11:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 17132);
    t5 = (t0 + 3272U);
    t6 = *((char **)t5);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t32 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t11 = (1 - 0);
    t36 = (t11 * 1);
    t36 = (t36 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t36;
    t9 = (t0 + 16692U);
    t5 = xsi_base_array_concat(t5, t30, t7, (char)97, t1, t32, (char)97, t6, t9, (char)101);
    t36 = (2U + 6U);
    t3 = (8U != t36);
    if (t3 == 1)
        goto LAB34;

LAB35:    t10 = (t0 + 9648);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t5, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB5;

LAB12:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 17134);
    t5 = (t0 + 3432U);
    t6 = *((char **)t5);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t32 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t11 = (0 - 0);
    t36 = (t11 * 1);
    t36 = (t36 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t36;
    t9 = (t0 + 16708U);
    t5 = xsi_base_array_concat(t5, t30, t7, (char)97, t1, t32, (char)97, t6, t9, (char)101);
    t36 = (1U + 7U);
    t3 = (8U != t36);
    if (t3 == 1)
        goto LAB36;

LAB37:    t10 = (t0 + 9648);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t5, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB5;

LAB13:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 17135);
    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t32 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t11 = (1 - 0);
    t36 = (t11 * 1);
    t36 = (t36 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t36;
    t9 = (t0 + 16644U);
    t5 = xsi_base_array_concat(t5, t30, t7, (char)97, t1, t32, (char)97, t6, t9, (char)101);
    t36 = (2U + 6U);
    t3 = (8U != t36);
    if (t3 == 1)
        goto LAB38;

LAB39:    t10 = (t0 + 9648);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t5, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB5;

LAB14:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 17137);
    t5 = (t0 + 2952U);
    t6 = *((char **)t5);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t32 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t11 = (4 - 0);
    t36 = (t11 * 1);
    t36 = (t36 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t36;
    t9 = (t0 + 16660U);
    t5 = xsi_base_array_concat(t5, t30, t7, (char)97, t1, t32, (char)97, t6, t9, (char)101);
    t36 = (5U + 3U);
    t3 = (8U != t36);
    if (t3 == 1)
        goto LAB40;

LAB41:    t10 = (t0 + 9648);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t5, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB5;

LAB15:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 17142);
    t5 = (t0 + 3592U);
    t6 = *((char **)t5);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t32 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t11 = (1 - 0);
    t36 = (t11 * 1);
    t36 = (t36 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t36;
    t9 = (t0 + 16724U);
    t5 = xsi_base_array_concat(t5, t30, t7, (char)97, t1, t32, (char)97, t6, t9, (char)101);
    t36 = (2U + 6U);
    t3 = (8U != t36);
    if (t3 == 1)
        goto LAB42;

LAB43:    t10 = (t0 + 9648);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t5, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB5;

LAB16:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 9648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB29:;
LAB30:    xsi_size_not_matching(8U, t36, 0);
    goto LAB31;

LAB32:    xsi_size_not_matching(8U, t36, 0);
    goto LAB33;

LAB34:    xsi_size_not_matching(8U, t36, 0);
    goto LAB35;

LAB36:    xsi_size_not_matching(8U, t36, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(8U, t36, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(8U, t36, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(8U, t36, 0);
    goto LAB43;

}

static void design_ip_dcf_77_a_3152274375_2372691052_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4392U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 9712);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 9280);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 9712);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}

static void design_ip_dcf_77_a_3152274375_2372691052_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 9776);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 9296);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 9776);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}

static void design_ip_dcf_77_a_3152274375_2372691052_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4712U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 9840);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 9312);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 9840);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 4872U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void design_ip_dcf_77_a_3152274375_2372691052_init()
{
	static char *pe[] = {(void *)design_ip_dcf_77_a_3152274375_2372691052_p_0,(void *)design_ip_dcf_77_a_3152274375_2372691052_p_1,(void *)design_ip_dcf_77_a_3152274375_2372691052_p_2,(void *)design_ip_dcf_77_a_3152274375_2372691052_p_3,(void *)design_ip_dcf_77_a_3152274375_2372691052_p_4,(void *)design_ip_dcf_77_a_3152274375_2372691052_p_5};
	xsi_register_didat("design_ip_dcf_77_a_3152274375_2372691052", "isim/DCF77_Receiver_tb_isim.exe.sim/design_ip_dcf_77/a_3152274375_2372691052.didat");
	xsi_register_executes(pe);
}
