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
static const char *ng0 = "D:/Uni/Arch/project/MIPSproject/Controller.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {14U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {35U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {43U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {5U, 0U};
static unsigned int ng16[] = {7U, 0U};
static const char *ng17 = "Data.txt";
static const char *ng18 = "a";
static const char *ng19 = "PCEn:%b,PCWrite:%b,Branch:%b,PCSrc:%b,ALUOp:%b,ALUSrcB:%b,ALUSrcA:%b,RegWrite:%b,IorD:%b,MemWrite:%b,IRWrite:%b,State:%b,INT:%b,INTB:%b,NMI:%b-";



static void Initial_47_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(47, ng0);

LAB2:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5800);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_58_1(char *t0)
{
    char t10[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 7768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 3160U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t8 = (t7 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB4;

LAB5:
LAB6:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t10);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t4 + 4);
    t46 = (t10 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB7;

LAB8:
LAB9:    t69 = (t0 + 9224);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t73, 0, 8);
    t74 = 1U;
    t75 = t74;
    t76 = (t41 + 4);
    t77 = *((unsigned int *)t41);
    t74 = (t74 & t77);
    t78 = *((unsigned int *)t76);
    t75 = (t75 & t78);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 | t74);
    t81 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t81 | t75);
    xsi_driver_vfirst_trans(t69, 0, 0);
    t82 = (t0 + 9080);
    *((int *)t82) = 1;

LAB1:    return;
LAB4:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t7 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB6;

LAB7:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t4 + 4);
    t56 = (t10 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t4);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t10);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB9;

}

static void Always_79_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 9096);
    *((int *)t2) = 1;
    t3 = (t0 + 8048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5800);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Always_85_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 8264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 9112);
    *((int *)t2) = 1;
    t3 = (t0 + 8296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 2840U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6440);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(87, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 6440);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_92_4(char *t0)
{
    char t11[8];
    char t25[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 8512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 9128);
    *((int *)t2) = 1;
    t3 = (t0 + 8544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 6440);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(96, ng0);

LAB34:    xsi_set_current_line(97, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 6600);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB33;

LAB9:    xsi_set_current_line(101, ng0);

LAB35:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 3320U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB39;

LAB36:    if (t21 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t11) = 1;

LAB39:    t10 = (t0 + 3480U);
    t24 = *((char **)t10);
    t10 = ((char*)((ng1)));
    memset(t25, 0, 8);
    t26 = (t24 + 4);
    t27 = (t10 + 4);
    t28 = *((unsigned int *)t24);
    t29 = *((unsigned int *)t10);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB43;

LAB40:    if (t37 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t25) = 1;

LAB43:    t42 = *((unsigned int *)t11);
    t43 = *((unsigned int *)t25);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t11 + 4);
    t46 = (t25 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB44;

LAB45:
LAB46:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(105, ng0);

LAB51:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB49:    goto LAB33;

LAB11:    xsi_set_current_line(112, ng0);

LAB52:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 3320U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB56;

LAB53:    if (t21 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t11) = 1;

LAB56:    t10 = (t0 + 3480U);
    t24 = *((char **)t10);
    t10 = ((char*)((ng1)));
    memset(t25, 0, 8);
    t26 = (t24 + 4);
    t27 = (t10 + 4);
    t28 = *((unsigned int *)t24);
    t29 = *((unsigned int *)t10);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB60;

LAB57:    if (t37 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t25) = 1;

LAB60:    t42 = *((unsigned int *)t11);
    t43 = *((unsigned int *)t25);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t11 + 4);
    t46 = (t25 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB61;

LAB62:
LAB63:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(116, ng0);

LAB68:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB66:    goto LAB33;

LAB13:    xsi_set_current_line(123, ng0);

LAB69:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 6600);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB33;

LAB15:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 3000U);
    t4 = *((char **)t3);

LAB70:    t3 = ((char*)((ng8)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t65 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB77;

LAB78:
LAB80:
LAB79:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB81:    goto LAB33;

LAB17:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 3000U);
    t5 = *((char **)t3);

LAB82:    t3 = ((char*)((ng8)));
    t65 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t65 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t8 == 1)
        goto LAB85;

LAB86:
LAB88:
LAB87:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB89:    goto LAB33;

LAB19:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng12)));
    t7 = (t0 + 6600);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB33;

LAB21:    xsi_set_current_line(145, ng0);

LAB90:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 3320U);
    t7 = *((char **)t3);
    t3 = (t0 + 3480U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t9 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB94;

LAB92:    if (*((unsigned int *)t3) == 0)
        goto LAB91;

LAB93:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB94:    t24 = (t11 + 4);
    t26 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB96;

LAB95:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t28 & 1U);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t11);
    t31 = (t29 & t30);
    *((unsigned int *)t25) = t31;
    t27 = (t7 + 4);
    t40 = (t11 + 4);
    t45 = (t25 + 4);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t40);
    t34 = (t32 | t33);
    *((unsigned int *)t45) = t34;
    t35 = *((unsigned int *)t45);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB97;

LAB98:
LAB99:    t55 = (t25 + 4);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t25);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(150, ng0);

LAB104:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB102:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5800);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t10 = (t7 + 4);
    t24 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t24);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t24);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB108;

LAB105:    if (t21 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t11) = 1;

LAB108:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB109;

LAB110:
LAB111:    goto LAB33;

LAB23:    xsi_set_current_line(157, ng0);

LAB113:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 3320U);
    t7 = *((char **)t3);
    t3 = (t0 + 3480U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t9 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB117;

LAB115:    if (*((unsigned int *)t3) == 0)
        goto LAB114;

LAB116:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB117:    t24 = (t11 + 4);
    t26 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB119;

LAB118:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t28 & 1U);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t11);
    t31 = (t29 & t30);
    *((unsigned int *)t25) = t31;
    t27 = (t7 + 4);
    t40 = (t11 + 4);
    t45 = (t25 + 4);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t40);
    t34 = (t32 | t33);
    *((unsigned int *)t45) = t34;
    t35 = *((unsigned int *)t45);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB120;

LAB121:
LAB122:    t55 = (t25 + 4);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t25);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB123;

LAB124:    xsi_set_current_line(161, ng0);

LAB127:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB125:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5800);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t10 = (t7 + 4);
    t24 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t24);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t24);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB131;

LAB128:    if (t21 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t11) = 1;

LAB131:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB132;

LAB133:
LAB134:    goto LAB33;

LAB25:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng16)));
    t7 = (t0 + 6600);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB33;

LAB27:    xsi_set_current_line(169, ng0);

LAB136:    xsi_set_current_line(170, ng0);
    t3 = (t0 + 3320U);
    t7 = *((char **)t3);
    t3 = (t0 + 3480U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t9 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB140;

LAB138:    if (*((unsigned int *)t3) == 0)
        goto LAB137;

LAB139:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB140:    t24 = (t11 + 4);
    t26 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB142;

LAB141:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t28 & 1U);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t11);
    t31 = (t29 & t30);
    *((unsigned int *)t25) = t31;
    t27 = (t7 + 4);
    t40 = (t11 + 4);
    t45 = (t25 + 4);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t40);
    t34 = (t32 | t33);
    *((unsigned int *)t45) = t34;
    t35 = *((unsigned int *)t45);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB143;

LAB144:
LAB145:    t55 = (t25 + 4);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t25);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB146;

LAB147:    xsi_set_current_line(173, ng0);

LAB150:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB148:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 5800);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t10 = (t7 + 4);
    t24 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t24);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t24);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB154;

LAB151:    if (t21 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t11) = 1;

LAB154:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB155;

LAB156:
LAB157:    goto LAB33;

LAB29:    xsi_set_current_line(180, ng0);

LAB159:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 3320U);
    t7 = *((char **)t3);
    t3 = (t0 + 3480U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t9 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB163;

LAB161:    if (*((unsigned int *)t3) == 0)
        goto LAB160;

LAB162:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB163:    t24 = (t11 + 4);
    t26 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB165;

LAB164:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t28 & 1U);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t11);
    t31 = (t29 & t30);
    *((unsigned int *)t25) = t31;
    t27 = (t7 + 4);
    t40 = (t11 + 4);
    t45 = (t25 + 4);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t40);
    t34 = (t32 | t33);
    *((unsigned int *)t45) = t34;
    t35 = *((unsigned int *)t45);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB166;

LAB167:
LAB168:    t55 = (t25 + 4);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t25);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB169;

LAB170:    xsi_set_current_line(184, ng0);

LAB173:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB171:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 5800);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t10 = (t7 + 4);
    t24 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t24);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t24);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB177;

LAB174:    if (t21 != 0)
        goto LAB176;

LAB175:    *((unsigned int *)t11) = 1;

LAB177:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB178;

LAB179:
LAB180:    goto LAB33;

LAB38:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB39;

LAB42:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB43;

LAB44:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t11 + 4);
    t56 = (t25 + 4);
    t57 = *((unsigned int *)t11);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t25);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB46;

LAB47:    xsi_set_current_line(102, ng0);

LAB50:    xsi_set_current_line(103, ng0);
    t79 = ((char*)((ng6)));
    t80 = (t0 + 6600);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 4);
    goto LAB49;

LAB55:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB56;

LAB59:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB60;

LAB61:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t11 + 4);
    t56 = (t25 + 4);
    t57 = *((unsigned int *)t11);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t25);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB63;

LAB64:    xsi_set_current_line(113, ng0);

LAB67:    xsi_set_current_line(114, ng0);
    t79 = ((char*)((ng5)));
    t80 = (t0 + 6600);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 4);
    goto LAB66;

LAB71:    xsi_set_current_line(133, ng0);
    t5 = ((char*)((ng9)));
    t7 = (t0 + 6600);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB81;

LAB73:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 6600);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB81;

LAB75:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 6600);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB81;

LAB77:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 6600);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB81;

LAB83:    xsi_set_current_line(140, ng0);
    t7 = ((char*)((ng14)));
    t9 = (t0 + 6600);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB89;

LAB85:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng15)));
    t7 = (t0 + 6600);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB89;

LAB91:    *((unsigned int *)t11) = 1;
    goto LAB94;

LAB96:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t26);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t24);
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t24) = (t21 | t22);
    goto LAB95;

LAB97:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t45);
    *((unsigned int *)t25) = (t37 | t38);
    t46 = (t7 + 4);
    t47 = (t11 + 4);
    t39 = *((unsigned int *)t7);
    t42 = (~(t39));
    t43 = *((unsigned int *)t46);
    t44 = (~(t43));
    t48 = *((unsigned int *)t11);
    t49 = (~(t48));
    t50 = *((unsigned int *)t47);
    t51 = (~(t50));
    t65 = (t42 & t44);
    t66 = (t49 & t51);
    t52 = (~(t65));
    t53 = (~(t66));
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & t52);
    t57 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t57 & t53);
    t58 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t58 & t52);
    t59 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t59 & t53);
    goto LAB99;

LAB100:    xsi_set_current_line(147, ng0);

LAB103:    xsi_set_current_line(148, ng0);
    t56 = ((char*)((ng5)));
    t73 = (t0 + 6600);
    xsi_vlogvar_assign_value(t73, t56, 0, 0, 4);
    goto LAB102;

LAB107:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(153, ng0);

LAB112:    xsi_set_current_line(154, ng0);
    t40 = ((char*)((ng4)));
    t45 = (t0 + 6600);
    xsi_vlogvar_assign_value(t45, t40, 0, 0, 4);
    goto LAB111;

LAB114:    *((unsigned int *)t11) = 1;
    goto LAB117;

LAB119:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t26);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t24);
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t24) = (t21 | t22);
    goto LAB118;

LAB120:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t45);
    *((unsigned int *)t25) = (t37 | t38);
    t46 = (t7 + 4);
    t47 = (t11 + 4);
    t39 = *((unsigned int *)t7);
    t42 = (~(t39));
    t43 = *((unsigned int *)t46);
    t44 = (~(t43));
    t48 = *((unsigned int *)t11);
    t49 = (~(t48));
    t50 = *((unsigned int *)t47);
    t51 = (~(t50));
    t65 = (t42 & t44);
    t66 = (t49 & t51);
    t52 = (~(t65));
    t53 = (~(t66));
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & t52);
    t57 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t57 & t53);
    t58 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t58 & t52);
    t59 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t59 & t53);
    goto LAB122;

LAB123:    xsi_set_current_line(158, ng0);

LAB126:    xsi_set_current_line(159, ng0);
    t56 = ((char*)((ng5)));
    t73 = (t0 + 6600);
    xsi_vlogvar_assign_value(t73, t56, 0, 0, 4);
    goto LAB125;

LAB130:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB131;

LAB132:    xsi_set_current_line(164, ng0);

LAB135:    xsi_set_current_line(165, ng0);
    t40 = ((char*)((ng4)));
    t45 = (t0 + 6600);
    xsi_vlogvar_assign_value(t45, t40, 0, 0, 4);
    goto LAB134;

LAB137:    *((unsigned int *)t11) = 1;
    goto LAB140;

LAB142:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t26);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t24);
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t24) = (t21 | t22);
    goto LAB141;

LAB143:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t45);
    *((unsigned int *)t25) = (t37 | t38);
    t46 = (t7 + 4);
    t47 = (t11 + 4);
    t39 = *((unsigned int *)t7);
    t42 = (~(t39));
    t43 = *((unsigned int *)t46);
    t44 = (~(t43));
    t48 = *((unsigned int *)t11);
    t49 = (~(t48));
    t50 = *((unsigned int *)t47);
    t51 = (~(t50));
    t65 = (t42 & t44);
    t66 = (t49 & t51);
    t52 = (~(t65));
    t53 = (~(t66));
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & t52);
    t57 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t57 & t53);
    t58 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t58 & t52);
    t59 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t59 & t53);
    goto LAB145;

LAB146:    xsi_set_current_line(170, ng0);

LAB149:    xsi_set_current_line(171, ng0);
    t56 = ((char*)((ng5)));
    t73 = (t0 + 6600);
    xsi_vlogvar_assign_value(t73, t56, 0, 0, 4);
    goto LAB148;

LAB153:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB154;

LAB155:    xsi_set_current_line(176, ng0);

LAB158:    xsi_set_current_line(177, ng0);
    t40 = ((char*)((ng4)));
    t45 = (t0 + 6600);
    xsi_vlogvar_assign_value(t45, t40, 0, 0, 4);
    goto LAB157;

LAB160:    *((unsigned int *)t11) = 1;
    goto LAB163;

LAB165:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t26);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t24);
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t24) = (t21 | t22);
    goto LAB164;

LAB166:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t45);
    *((unsigned int *)t25) = (t37 | t38);
    t46 = (t7 + 4);
    t47 = (t11 + 4);
    t39 = *((unsigned int *)t7);
    t42 = (~(t39));
    t43 = *((unsigned int *)t46);
    t44 = (~(t43));
    t48 = *((unsigned int *)t11);
    t49 = (~(t48));
    t50 = *((unsigned int *)t47);
    t51 = (~(t50));
    t65 = (t42 & t44);
    t66 = (t49 & t51);
    t52 = (~(t65));
    t53 = (~(t66));
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & t52);
    t57 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t57 & t53);
    t58 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t58 & t52);
    t59 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t59 & t53);
    goto LAB168;

LAB169:    xsi_set_current_line(181, ng0);

LAB172:    xsi_set_current_line(182, ng0);
    t56 = ((char*)((ng5)));
    t73 = (t0 + 6600);
    xsi_vlogvar_assign_value(t73, t56, 0, 0, 4);
    goto LAB171;

LAB176:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB177;

LAB178:    xsi_set_current_line(187, ng0);

LAB181:    xsi_set_current_line(188, ng0);
    t40 = ((char*)((ng4)));
    t45 = (t0 + 6600);
    xsi_vlogvar_assign_value(t45, t40, 0, 0, 4);
    goto LAB180;

}

static void Always_196_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;

LAB0:    t1 = (t0 + 8760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 9144);
    *((int *)t2) = 1;
    t3 = (t0 + 8792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(196, ng0);

LAB5:    xsi_set_current_line(197, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng17, ng18);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 5960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 5960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3800U);
    t7 = *((char **)t6);
    t6 = (t0 + 6120);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 6280);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 4840);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 5640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5480);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 5320);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 5160);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 4200);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 4360);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 4680);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 6440);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3320U);
    t41 = *((char **)t40);
    t40 = (t0 + 3480U);
    t42 = *((char **)t40);
    t40 = (t0 + 3640U);
    t43 = *((char **)t40);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng19, 16, t0, (char)118, t7, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t15, 1, (char)118, t18, 2, (char)118, t21, 2, (char)118, t24, 1, (char)118, t27, 1, (char)118, t30, 1, (char)118, t33, 1, (char)118, t36, 1, (char)118, t39, 4, (char)118, t41, 1, (char)118, t42, 1, (char)118, t43, 1);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 5960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 6440);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB6:    t6 = ((char*)((ng4)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t44 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t44 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t44 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(205, ng0);

LAB32:    xsi_set_current_line(206, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 4680);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB9:    xsi_set_current_line(215, ng0);

LAB33:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 4680);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB11:    xsi_set_current_line(225, ng0);

LAB34:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 4680);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB13:    xsi_set_current_line(236, ng0);

LAB35:    xsi_set_current_line(237, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4680);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB15:    xsi_set_current_line(242, ng0);
    t3 = ((char*)((ng14)));
    t6 = (t0 + 5480);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 2);
    goto LAB31;

LAB17:    xsi_set_current_line(244, ng0);

LAB36:    xsi_set_current_line(246, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 5320);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB31;

LAB19:    xsi_set_current_line(250, ng0);

LAB37:    xsi_set_current_line(251, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4200);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    goto LAB31;

LAB21:    xsi_set_current_line(254, ng0);

LAB38:    xsi_set_current_line(255, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 5160);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB23:    xsi_set_current_line(260, ng0);

LAB39:    xsi_set_current_line(261, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 4360);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB25:    xsi_set_current_line(265, ng0);

LAB40:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 5320);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB31;

LAB27:    xsi_set_current_line(270, ng0);

LAB41:    xsi_set_current_line(271, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 5000);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB29:    xsi_set_current_line(275, ng0);

LAB42:    xsi_set_current_line(276, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 5320);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(278, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(279, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

}


extern void work_m_00000000003876013674_4144471541_init()
{
	static char *pe[] = {(void *)Initial_47_0,(void *)Cont_58_1,(void *)Always_79_2,(void *)Always_85_3,(void *)Always_92_4,(void *)Always_196_5};
	xsi_register_didat("work_m_00000000003876013674_4144471541", "isim/Test_DataPath2_isim_beh.exe.sim/work/m_00000000003876013674_4144471541.didat");
	xsi_register_executes(pe);
}
