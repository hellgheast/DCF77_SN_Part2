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
static const char *ng0 = "//intra.he-arc.ch/UTL/ING-PER/yves.meyer/Cours/Systemes_Numeriques/SolutionsExercices/Sequentiel/Ex7_PicoBlaze/additioneur_picoblaze.ews/design.hdl/additioneur_stimuli.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);


static void design_a_2773784971_2730021763_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)0);
    if (t5 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(62, ng0);

LAB13:    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4264);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t11 = (t0 + 4264);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t11, 0U, 1, t10);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t10 = (5 * 1000LL);
    t9 = (t0 + 4328);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t9, 0U, 1, t10);
    t16 = (17 * 1000LL);
    t15 = (t0 + 4328);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t15, 0U, 1, t16);
    xsi_set_current_line(60, ng0);
    t10 = (25 * 1000LL);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t10);

LAB9:    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB5:    goto LAB2;

LAB7:    goto LAB5;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

LAB11:    goto LAB5;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}

void design_a_2773784971_2730021763_sub_105344256_1881409087(char *t0, char *t1, int t2)
{
    char t4[8];
    char *t5;
    int t6;
    int t7;
    char *t8;
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
    char *t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    int t31;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = 1;
    t7 = t2;

LAB2:    if (t6 <= t7)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t8 = (t0 + 2432U);
    xsi_add_dynamic_wait(t1, t8, -1, -1);
    t9 = (t0 + 2432U);
    xsi_add_dynamic_wait(t1, t9, -1, -1);

LAB9:    t10 = (t1 + 224U);
    t10 = *((char **)t10);
    xsi_wp_set_status(t10, 1);
    t11 = (t1 + 88U);
    t12 = *((char **)t11);
    t13 = (t12 + 2480U);
    *((unsigned int *)t13) = 1U;
    t14 = (t1 + 88U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    getcontext(t16);
    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t19 = (t18 + 2480U);
    t20 = *((unsigned int *)t19);
    if (t20 == 1)
        goto LAB10;

LAB11:    t21 = (t1 + 88U);
    t22 = *((char **)t21);
    t23 = (t22 + 2480U);
    *((unsigned int *)t23) = 3U;

LAB7:
LAB8:    t25 = (t0 + 2432U);
    t26 = xsi_signal_has_event(t25);
    if (t26 == 1)
        goto LAB12;

LAB13:    t24 = (unsigned char)0;

LAB14:    if (t24 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:    if (t6 == t7)
        goto LAB5;

LAB15:    t31 = (t6 + 1);
    t6 = t31;
    goto LAB2;

LAB6:    xsi_remove_dynamic_wait(t1, t8);
    xsi_remove_dynamic_wait(t1, t9);
    goto LAB4;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB12:    t27 = (t0 + 2472U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)3);
    t24 = t30;
    goto LAB14;

}

void design_a_2773784971_2730021763_sub_1609090416_1881409087(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;

LAB0:    t4 = (t0 + 4392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    t4 = (t0 + 8753);
    t6 = (t0 + 4456);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 8680U);
    t12 = (t11 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    memcpy(t10, t4, t13);
    xsi_driver_first_trans_fast_port(t6);
    t4 = (t0 + 8761);
    t6 = (t0 + 4520);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 8696U);
    t12 = (t11 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    memcpy(t10, t4, t13);
    xsi_driver_first_trans_fast_port(t6);

LAB1:    return;
}

void design_a_2773784971_2730021763_sub_1767352679_1881409087(char *t0, char *t1, char *t2, int t3)
{
    char t5[24];
    char t6[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int64 t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 7);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t5 + 4U);
    t11 = (t2 != 0);
    if (t11 == 1)
        goto LAB3;

LAB2:    t12 = (t5 + 12U);
    *((char **)t12) = t6;
    t13 = (t5 + 20U);
    *((int *)t13) = t3;
    t14 = (t0 + 1832U);
    t15 = *((char **)t14);
    t14 = (t0 + 8712U);
    t16 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t15, t14, t2, t6);
    if (t16 != 0)
        goto LAB4;

LAB6:
LAB5:
LAB1:    return;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB4:    t17 = (t0 + 4584);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_delta(t17, 0U, 1, 0LL);
    t22 = (1 * 1000LL);
    t23 = (t0 + 4584);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t23, 0U, 1, t22);
    t7 = (t0 + 4648);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    *((int *)t18) = t3;
    xsi_driver_first_trans_fast(t7);
    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    goto LAB5;

LAB7:    t7 = (t0 + 8769);
    xsi_report(t7, 41U, (unsigned char)1);
    goto LAB8;

}

void design_a_2773784971_2730021763_sub_2883086054_1881409087(char *t0, char *t1, unsigned char t2, int t3)
{
    char t5[16];
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((int *)t7) = t3;
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 != t2);
    if (t11 != 0)
        goto LAB2;

LAB4:
LAB3:
LAB1:    return;
LAB2:    t8 = (t0 + 4584);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);
    t16 = (1 * 1000LL);
    t17 = (t0 + 4584);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t16);
    t8 = (t0 + 4648);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t3;
    xsi_driver_first_trans_fast(t8);
    if ((unsigned char)0 == 0)
        goto LAB5;

LAB6:    goto LAB3;

LAB5:    t8 = (t0 + 8810);
    xsi_report(t8, 41U, (unsigned char)1);
    goto LAB6;

}

static void design_a_2773784971_2730021763_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_1609090416_1881409087(t0, t2);
    xsi_set_current_line(108, ng0);
    if ((unsigned char)0 == 0)
        goto LAB4;

LAB5:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 10);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 30);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3688);
    t3 = (t0 + 8869);
    design_a_2773784971_2730021763_sub_1767352679_1881409087(t0, t2, t3, 1);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_2883086054_1881409087(t0, t2, (unsigned char)2, 2);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 8877);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 8885);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 30);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3688);
    t3 = (t0 + 8893);
    design_a_2773784971_2730021763_sub_1767352679_1881409087(t0, t2, t3, 3);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_2883086054_1881409087(t0, t2, (unsigned char)2, 4);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 8901);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 8909);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 30);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3688);
    t3 = (t0 + 8917);
    design_a_2773784971_2730021763_sub_1767352679_1881409087(t0, t2, t3, 5);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 1);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_2883086054_1881409087(t0, t2, (unsigned char)3, 6);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 8925);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 8933);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 30);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3688);
    t3 = (t0 + 8941);
    design_a_2773784971_2730021763_sub_1767352679_1881409087(t0, t2, t3, 7);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 1);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_2883086054_1881409087(t0, t2, (unsigned char)3, 8);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 8949);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 8957);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 30);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3688);
    t3 = (t0 + 8965);
    design_a_2773784971_2730021763_sub_1767352679_1881409087(t0, t2, t3, 9);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 1);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_2883086054_1881409087(t0, t2, (unsigned char)2, 10);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3688);
    design_a_2773784971_2730021763_sub_105344256_1881409087(t0, t2, 5);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);

LAB8:    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    t2 = (t0 + 8851);
    xsi_report(t2, 18U, (unsigned char)0);
    goto LAB5;

LAB6:    goto LAB2;

LAB7:    goto LAB6;

LAB9:    goto LAB7;

}


extern void design_a_2773784971_2730021763_init()
{
	static char *pe[] = {(void *)design_a_2773784971_2730021763_p_0,(void *)design_a_2773784971_2730021763_p_1};
	static char *se[] = {(void *)design_a_2773784971_2730021763_sub_105344256_1881409087,(void *)design_a_2773784971_2730021763_sub_1609090416_1881409087,(void *)design_a_2773784971_2730021763_sub_1767352679_1881409087,(void *)design_a_2773784971_2730021763_sub_2883086054_1881409087};
	xsi_register_didat("design_a_2773784971_2730021763", "isim/additioneur_tb_isim.exe.sim/design/a_2773784971_2730021763.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
