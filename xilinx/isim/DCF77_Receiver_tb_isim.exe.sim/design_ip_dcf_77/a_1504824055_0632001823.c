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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN_Part2/dcf_77_complete.ews/design.hdl/decode_block.vhd";



static void design_ip_dcf_77_a_1504824055_0632001823_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5000);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void design_ip_dcf_77_a_1504824055_0632001823_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5016);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void design_ip_dcf_77_a_1504824055_0632001823_init()
{
	static char *pe[] = {(void *)design_ip_dcf_77_a_1504824055_0632001823_p_0,(void *)design_ip_dcf_77_a_1504824055_0632001823_p_1};
	xsi_register_didat("design_ip_dcf_77_a_1504824055_0632001823", "isim/DCF77_Receiver_tb_isim.exe.sim/design_ip_dcf_77/a_1504824055_0632001823.didat");
	xsi_register_executes(pe);
}
