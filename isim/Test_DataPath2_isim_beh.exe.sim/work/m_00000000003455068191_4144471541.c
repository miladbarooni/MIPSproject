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
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {15U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {35U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {43U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {7U, 0U};



static void Initial_46_0(char *t0)
{

LAB0:    xsi_set_current_line(46, ng0);

LAB2:
LAB1:    return;
}

static void Cont_62_1(char *t0)
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

LAB0:    t1 = (t0 + 7312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 3024U);
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
LAB9:    t69 = (t0 + 8504);
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
    t82 = (t0 + 8376);
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

static void Always_82_2(char *t0)
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

LAB0:    t1 = (t0 + 7560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 8392);
    *((int *)t2) = 1;
    t3 = (t0 + 7592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 2704U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 6144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(84, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5984);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB7;

}

static void Always_89_3(char *t0)
{
    char t11[8];
    char t29[8];
    char t45[8];
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
    char *t12;
    char *t13;
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
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 7808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 8408);
    *((int *)t2) = 1;
    t3 = (t0 + 7840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 5984);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(93, ng0);

LAB32:    xsi_set_current_line(94, ng0);
    t9 = (t0 + 3184U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB36;

LAB33:    if (t23 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t27 = (t0 + 3344U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng4)));
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t28);
    t33 = *((unsigned int *)t27);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB40;

LAB37:    if (t41 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t29) = 1;

LAB40:    t46 = *((unsigned int *)t11);
    t47 = *((unsigned int *)t29);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t11 + 4);
    t50 = (t29 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB41;

LAB42:
LAB43:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(97, ng0);

LAB48:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB46:    goto LAB31;

LAB9:    xsi_set_current_line(104, ng0);

LAB49:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 3184U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB53;

LAB50:    if (t23 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t11) = 1;

LAB53:    t10 = (t0 + 3344U);
    t12 = *((char **)t10);
    t10 = ((char*)((ng4)));
    memset(t29, 0, 8);
    t13 = (t12 + 4);
    t26 = (t10 + 4);
    t32 = *((unsigned int *)t12);
    t33 = *((unsigned int *)t10);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t26);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t26);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB57;

LAB54:    if (t41 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t29) = 1;

LAB57:    t46 = *((unsigned int *)t11);
    t47 = *((unsigned int *)t29);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t28 = (t11 + 4);
    t30 = (t29 + 4);
    t31 = (t45 + 4);
    t52 = *((unsigned int *)t28);
    t53 = *((unsigned int *)t30);
    t54 = (t52 | t53);
    *((unsigned int *)t31) = t54;
    t55 = *((unsigned int *)t31);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB58;

LAB59:
LAB60:    t50 = (t45 + 4);
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(108, ng0);

LAB65:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB63:    goto LAB31;

LAB11:    xsi_set_current_line(115, ng0);

LAB66:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 6144);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB31;

LAB13:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 2864U);
    t4 = *((char **)t3);

LAB67:    t3 = ((char*)((ng7)));
    t69 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t69 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB74;

LAB75:
LAB77:
LAB76:    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB78:    goto LAB31;

LAB15:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 2864U);
    t5 = *((char **)t3);

LAB79:    t3 = ((char*)((ng7)));
    t69 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t69 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t8 == 1)
        goto LAB82;

LAB83:
LAB85:
LAB84:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB86:    goto LAB31;

LAB17:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng11)));
    t7 = (t0 + 6144);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB31;

LAB19:    xsi_set_current_line(137, ng0);

LAB87:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 3184U);
    t7 = *((char **)t3);
    t3 = (t0 + 3344U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t3) == 0)
        goto LAB88;

LAB90:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB91:    t12 = (t11 + 4);
    t13 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB93;

LAB92:    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & 1U);
    t33 = *((unsigned int *)t7);
    t34 = *((unsigned int *)t11);
    t35 = (t33 & t34);
    *((unsigned int *)t29) = t35;
    t26 = (t7 + 4);
    t27 = (t11 + 4);
    t28 = (t29 + 4);
    t36 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t28) = t38;
    t39 = *((unsigned int *)t28);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB94;

LAB95:
LAB96:    t44 = (t29 + 4);
    t64 = *((unsigned int *)t44);
    t65 = (~(t64));
    t66 = *((unsigned int *)t29);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(141, ng0);

LAB101:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB99:    goto LAB31;

LAB21:    xsi_set_current_line(145, ng0);

LAB102:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 3184U);
    t7 = *((char **)t3);
    t3 = (t0 + 3344U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB106;

LAB104:    if (*((unsigned int *)t3) == 0)
        goto LAB103;

LAB105:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB106:    t12 = (t11 + 4);
    t13 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB108;

LAB107:    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & 1U);
    t33 = *((unsigned int *)t7);
    t34 = *((unsigned int *)t11);
    t35 = (t33 & t34);
    *((unsigned int *)t29) = t35;
    t26 = (t7 + 4);
    t27 = (t11 + 4);
    t28 = (t29 + 4);
    t36 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t28) = t38;
    t39 = *((unsigned int *)t28);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB109;

LAB110:
LAB111:    t44 = (t29 + 4);
    t64 = *((unsigned int *)t44);
    t65 = (~(t64));
    t66 = *((unsigned int *)t29);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(149, ng0);

LAB116:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB114:    goto LAB31;

LAB23:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng15)));
    t7 = (t0 + 6144);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB31;

LAB25:    xsi_set_current_line(154, ng0);

LAB117:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 3184U);
    t7 = *((char **)t3);
    t3 = (t0 + 3344U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB121;

LAB119:    if (*((unsigned int *)t3) == 0)
        goto LAB118;

LAB120:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB121:    t12 = (t11 + 4);
    t13 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB123;

LAB122:    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & 1U);
    t33 = *((unsigned int *)t7);
    t34 = *((unsigned int *)t11);
    t35 = (t33 & t34);
    *((unsigned int *)t29) = t35;
    t26 = (t7 + 4);
    t27 = (t11 + 4);
    t28 = (t29 + 4);
    t36 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t28) = t38;
    t39 = *((unsigned int *)t28);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB124;

LAB125:
LAB126:    t44 = (t29 + 4);
    t64 = *((unsigned int *)t44);
    t65 = (~(t64));
    t66 = *((unsigned int *)t29);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(158, ng0);

LAB131:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB129:    goto LAB31;

LAB27:    xsi_set_current_line(162, ng0);

LAB132:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 3184U);
    t7 = *((char **)t3);
    t3 = (t0 + 3344U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB136;

LAB134:    if (*((unsigned int *)t3) == 0)
        goto LAB133;

LAB135:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB136:    t12 = (t11 + 4);
    t13 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB138;

LAB137:    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & 1U);
    t33 = *((unsigned int *)t7);
    t34 = *((unsigned int *)t11);
    t35 = (t33 & t34);
    *((unsigned int *)t29) = t35;
    t26 = (t7 + 4);
    t27 = (t11 + 4);
    t28 = (t29 + 4);
    t36 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t28) = t38;
    t39 = *((unsigned int *)t28);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB139;

LAB140:
LAB141:    t44 = (t29 + 4);
    t64 = *((unsigned int *)t44);
    t65 = (~(t64));
    t66 = *((unsigned int *)t29);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(166, ng0);

LAB146:    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB144:    goto LAB31;

LAB35:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB36;

LAB39:    t44 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB40;

LAB41:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t11 + 4);
    t60 = (t29 + 4);
    t61 = *((unsigned int *)t11);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t29);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB43;

LAB44:    xsi_set_current_line(94, ng0);

LAB47:    xsi_set_current_line(95, ng0);
    t83 = ((char*)((ng5)));
    t84 = (t0 + 6144);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 4);
    goto LAB46;

LAB52:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB53;

LAB56:    t27 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB57;

LAB58:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t31);
    *((unsigned int *)t45) = (t57 | t58);
    t44 = (t11 + 4);
    t49 = (t29 + 4);
    t61 = *((unsigned int *)t11);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t29);
    t66 = (~(t65));
    t67 = *((unsigned int *)t49);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t73 & t71);
    t74 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB60;

LAB61:    xsi_set_current_line(105, ng0);

LAB64:    xsi_set_current_line(106, ng0);
    t51 = ((char*)((ng2)));
    t59 = (t0 + 6144);
    xsi_vlogvar_assign_value(t59, t51, 0, 0, 4);
    goto LAB63;

LAB68:    xsi_set_current_line(125, ng0);
    t5 = ((char*)((ng8)));
    t7 = (t0 + 6144);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB78;

LAB70:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB78;

LAB72:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB78;

LAB74:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB78;

LAB80:    xsi_set_current_line(132, ng0);
    t7 = ((char*)((ng13)));
    t9 = (t0 + 6144);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB86;

LAB82:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng14)));
    t7 = (t0 + 6144);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB86;

LAB88:    *((unsigned int *)t11) = 1;
    goto LAB91;

LAB93:    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t11) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB92;

LAB94:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t29) = (t41 | t42);
    t30 = (t7 + 4);
    t31 = (t11 + 4);
    t43 = *((unsigned int *)t7);
    t46 = (~(t43));
    t47 = *((unsigned int *)t30);
    t48 = (~(t47));
    t52 = *((unsigned int *)t11);
    t53 = (~(t52));
    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t69 = (t46 & t48);
    t70 = (t53 & t55);
    t56 = (~(t69));
    t57 = (~(t70));
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t56);
    t61 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t61 & t57);
    t62 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t62 & t56);
    t63 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t63 & t57);
    goto LAB96;

LAB97:    xsi_set_current_line(138, ng0);

LAB100:    xsi_set_current_line(139, ng0);
    t49 = ((char*)((ng2)));
    t50 = (t0 + 6144);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 4);
    goto LAB99;

LAB103:    *((unsigned int *)t11) = 1;
    goto LAB106;

LAB108:    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t11) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB107;

LAB109:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t29) = (t41 | t42);
    t30 = (t7 + 4);
    t31 = (t11 + 4);
    t43 = *((unsigned int *)t7);
    t46 = (~(t43));
    t47 = *((unsigned int *)t30);
    t48 = (~(t47));
    t52 = *((unsigned int *)t11);
    t53 = (~(t52));
    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t69 = (t46 & t48);
    t70 = (t53 & t55);
    t56 = (~(t69));
    t57 = (~(t70));
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t56);
    t61 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t61 & t57);
    t62 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t62 & t56);
    t63 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t63 & t57);
    goto LAB111;

LAB112:    xsi_set_current_line(146, ng0);

LAB115:    xsi_set_current_line(147, ng0);
    t49 = ((char*)((ng2)));
    t50 = (t0 + 6144);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 4);
    goto LAB114;

LAB118:    *((unsigned int *)t11) = 1;
    goto LAB121;

LAB123:    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t11) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB122;

LAB124:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t29) = (t41 | t42);
    t30 = (t7 + 4);
    t31 = (t11 + 4);
    t43 = *((unsigned int *)t7);
    t46 = (~(t43));
    t47 = *((unsigned int *)t30);
    t48 = (~(t47));
    t52 = *((unsigned int *)t11);
    t53 = (~(t52));
    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t69 = (t46 & t48);
    t70 = (t53 & t55);
    t56 = (~(t69));
    t57 = (~(t70));
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t56);
    t61 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t61 & t57);
    t62 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t62 & t56);
    t63 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t63 & t57);
    goto LAB126;

LAB127:    xsi_set_current_line(155, ng0);

LAB130:    xsi_set_current_line(156, ng0);
    t49 = ((char*)((ng2)));
    t50 = (t0 + 6144);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 4);
    goto LAB129;

LAB133:    *((unsigned int *)t11) = 1;
    goto LAB136;

LAB138:    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t11) = (t21 | t22);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t23 | t24);
    goto LAB137;

LAB139:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t29) = (t41 | t42);
    t30 = (t7 + 4);
    t31 = (t11 + 4);
    t43 = *((unsigned int *)t7);
    t46 = (~(t43));
    t47 = *((unsigned int *)t30);
    t48 = (~(t47));
    t52 = *((unsigned int *)t11);
    t53 = (~(t52));
    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t69 = (t46 & t48);
    t70 = (t53 & t55);
    t56 = (~(t69));
    t57 = (~(t70));
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t56);
    t61 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t61 & t57);
    t62 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t62 & t56);
    t63 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t63 & t57);
    goto LAB141;

LAB142:    xsi_set_current_line(163, ng0);

LAB145:    xsi_set_current_line(164, ng0);
    t49 = ((char*)((ng2)));
    t50 = (t0 + 6144);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 4);
    goto LAB144;

}

static void Always_175_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 8056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 8424);
    *((int *)t2) = 1;
    t3 = (t0 + 8088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(175, ng0);

LAB5:    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 5984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(182, ng0);

LAB30:    xsi_set_current_line(183, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 4544);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB9:    xsi_set_current_line(192, ng0);

LAB31:    xsi_set_current_line(193, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 4544);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB11:    xsi_set_current_line(203, ng0);

LAB32:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4544);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB13:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 5344);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB29;

LAB15:    xsi_set_current_line(211, ng0);

LAB33:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB29;

LAB17:    xsi_set_current_line(217, ng0);

LAB34:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4064);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB29;

LAB19:    xsi_set_current_line(221, ng0);

LAB35:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5024);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB21:    xsi_set_current_line(227, ng0);

LAB36:    xsi_set_current_line(228, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4224);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB23:    xsi_set_current_line(232, ng0);

LAB37:    xsi_set_current_line(233, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB29;

LAB25:    xsi_set_current_line(237, ng0);

LAB38:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB27:    xsi_set_current_line(242, ng0);

LAB39:    xsi_set_current_line(243, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

}


extern void work_m_00000000003455068191_4144471541_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Cont_62_1,(void *)Always_82_2,(void *)Always_89_3,(void *)Always_175_4};
	xsi_register_didat("work_m_00000000003455068191_4144471541", "isim/Test_DataPath2_isim_beh.exe.sim/work/m_00000000003455068191_4144471541.didat");
	xsi_register_executes(pe);
}
