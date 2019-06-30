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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003866737501_2707269888_init();
    work_m_00000000004057760517_1733832700_init();
    work_m_00000000000179670750_2312456034_init();
    work_m_00000000000196526887_2321183677_init();
    work_m_00000000000674988168_2531829270_init();
    work_m_00000000000380753685_2804887956_init();
    work_m_00000000003586200753_4144471541_init();
    work_m_00000000002209423036_2620361887_init();
    work_m_00000000000788666271_0860499288_init();
    work_m_00000000002131890782_2937920168_init();
    work_m_00000000000496895229_4278839206_init();
    work_m_00000000003490464256_2404967342_init();
    work_m_00000000003077507077_0413022597_init();
    work_m_00000000002019626628_0170628715_init();
    work_m_00000000003705399272_0864879315_init();
    work_m_00000000001820229848_0886308060_init();
    work_m_00000000001963149249_0891733127_init();
    work_m_00000000004231346370_0891304526_init();
    work_m_00000000001161059125_3979377396_init();
    work_m_00000000000484985622_2061640220_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000484985622_2061640220");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
