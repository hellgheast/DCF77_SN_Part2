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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *IEEE_P_2592010699;
char *IEEE_P_1242562249;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *UNISIM_P_0947159679;
char *STD_TEXTIO;
char *IEEE_P_2717149903;
char *IEEE_P_1367372525;
char *UNISIM_P_3222816464;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    unisim_p_0947159679_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    unisim_a_1646226234_1266530935_init();
    unisim_a_3484885994_2523279426_init();
    unisim_a_2125825869_3731405331_init();
    unisim_a_2001057742_2388994713_init();
    unisim_a_0039681122_1945201939_init();
    unisim_a_2496767846_3807856483_init();
    unisim_a_0350208134_1521797606_init();
    unisim_a_1663430516_3676810390_init();
    unisim_a_1941169844_3118875749_init();
    unisim_a_1762317619_3723259517_init();
    unisim_a_3163574381_0086195937_init();
    unisim_a_2425416179_1721142233_init();
    unisim_a_0868425105_1864968857_init();
    unisim_a_1836616293_3089378898_init();
    unisim_a_3519694068_2693788048_init();
    unisim_a_2021113674_3752513572_init();
    unisim_a_3055263662_1392679692_init();
    design_a_0962375630_2111220564_init();
    design_a_2327962978_1516540902_init();
    design_a_2921923577_1516540902_init();
    design_a_1078965014_2372691052_init();
    design_a_1373089465_2372691052_init();
    design_a_1088173002_2372691052_init();
    design_a_2370737399_2372691052_init();
    design_a_1504824055_0632001823_init();
    design_a_3538705604_2372691052_init();
    design_a_1692733374_3212880686_init();
    design_a_4160412283_3212880686_init();
    design_a_3558088846_0632001823_init();
    design_a_4056340442_2372691052_init();
    design_a_0757614360_2372691052_init();
    design_a_3152274375_2372691052_init();
    design_a_0927493535_2372691052_init();
    design_a_0136892271_2372691052_init();
    design_a_1330657866_0632001823_init();
    design_a_2206905697_1516540902_init();
    design_a_0253612051_1516540902_init();
    unisim_a_3702704980_1602505438_init();
    unisim_a_2233298088_0124092600_init();
    unisim_a_0936227941_2005071195_init();
    unisim_a_1398595224_1990404599_init();
    design_a_0844563045_2111220564_init();
    design_a_0616549169_2111220564_init();
    design_a_0550431143_0622287258_init();
    design_a_1237358754_1516540902_init();
    design_a_3861763201_1516540902_init();
    design_a_3515141664_0632001823_init();
    design_a_3186406764_1516540902_init();
    unisim_a_1390241225_0762929208_init();
    design_a_2471018112_2111220564_init();
    design_a_1421029452_0632001823_init();


    xsi_register_tops("design_a_1421029452_0632001823");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");

    return xsi_run_simulation(argc, argv);

}
