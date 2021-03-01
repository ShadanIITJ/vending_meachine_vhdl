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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Desktop/CODE/vending_meachine/vending_meachine.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2982189346_1149469521_p_0(char *t0)
{
    char t25[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t26;

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5848);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 2312U);
    t4 = *((char **)t3);
    t3 = (t0 + 3568U);
    t5 = *((char **)t3);
    t6 = xsi_mem_cmp(t5, t4, 3U);
    if (t6 == 1)
        goto LAB6;

LAB10:    t3 = (t0 + 3688U);
    t7 = *((char **)t3);
    t8 = xsi_mem_cmp(t7, t4, 3U);
    if (t8 == 1)
        goto LAB7;

LAB11:    t3 = (t0 + 3808U);
    t9 = *((char **)t3);
    t10 = xsi_mem_cmp(t9, t4, 3U);
    if (t10 == 1)
        goto LAB8;

LAB12:
LAB9:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 3568U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1192U);
    t11 = *((char **)t3);
    t3 = (t0 + 9979);
    t13 = 1;
    if (3U == 3U)
        goto LAB17;

LAB18:    t13 = 0;

LAB19:    if (t13 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 9982);
    t2 = 1;
    if (3U == 3U)
        goto LAB28;

LAB29:    t2 = 0;

LAB30:    if (t2 != 0)
        goto LAB26;

LAB27:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 9985);
    t2 = 1;
    if (3U == 3U)
        goto LAB39;

LAB40:    t2 = 0;

LAB41:    if (t2 != 0)
        goto LAB37;

LAB38:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 6040);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3568U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB5;

LAB7:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 9988);
    t2 = 1;
    if (3U == 3U)
        goto LAB51;

LAB52:    t2 = 0;

LAB53:    if (t2 != 0)
        goto LAB48;

LAB50:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 9991);
    t2 = 1;
    if (3U == 3U)
        goto LAB59;

LAB60:    t2 = 0;

LAB61:    if (t2 != 0)
        goto LAB57;

LAB58:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 9994);
    t2 = 1;
    if (3U == 3U)
        goto LAB67;

LAB68:    t2 = 0;

LAB69:    if (t2 != 0)
        goto LAB65;

LAB66:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    t2 = (t6 >= t8);
    if (t2 != 0)
        goto LAB73;

LAB75:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 3688U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);

LAB74:
LAB49:    goto LAB5;

LAB8:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 10006);
    t4 = (t0 + 6488);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 10009);
    t4 = (t0 + 6232);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 3568U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB13:;
LAB14:    xsi_set_current_line(92, ng0);
    t17 = (t0 + 2472U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t20 = (t19 >= 1);
    if (t20 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB15;

LAB17:    t14 = 0;

LAB20:    if (t14 < 3U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t15 = (t11 + t14);
    t16 = (t3 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB18;

LAB22:    t14 = (t14 + 1);
    goto LAB20;

LAB23:    xsi_set_current_line(93, ng0);
    t17 = (t0 + 5976);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((int *)t24) = 5;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 6040);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3688U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(99, ng0);
    t9 = (t0 + 2632U);
    t11 = *((char **)t9);
    t6 = *((int *)t11);
    t13 = (t6 >= 1);
    if (t13 != 0)
        goto LAB34;

LAB36:
LAB35:    goto LAB15;

LAB28:    t14 = 0;

LAB31:    if (t14 < 3U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t5 = (t3 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t7))
        goto LAB29;

LAB33:    t14 = (t14 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(100, ng0);
    t9 = (t0 + 5976);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 20;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 6040);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3688U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(106, ng0);
    t9 = (t0 + 2792U);
    t11 = *((char **)t9);
    t6 = *((int *)t11);
    t13 = (t6 >= 1);
    if (t13 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB15;

LAB39:    t14 = 0;

LAB42:    if (t14 < 3U)
        goto LAB43;
    else
        goto LAB41;

LAB43:    t5 = (t3 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t7))
        goto LAB40;

LAB44:    t14 = (t14 + 1);
    goto LAB42;

LAB45:    xsi_set_current_line(107, ng0);
    t9 = (t0 + 5976);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 35;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 6040);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3688U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

LAB48:    xsi_set_current_line(119, ng0);
    t9 = (t0 + 3112U);
    t11 = *((char **)t9);
    t6 = *((int *)t11);
    t8 = (t6 + 5);
    t9 = (t0 + 6168);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t8;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3688U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

LAB51:    t14 = 0;

LAB54:    if (t14 < 3U)
        goto LAB55;
    else
        goto LAB53;

LAB55:    t5 = (t3 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t7))
        goto LAB52;

LAB56:    t14 = (t14 + 1);
    goto LAB54;

LAB57:    xsi_set_current_line(123, ng0);
    t9 = (t0 + 3112U);
    t11 = *((char **)t9);
    t6 = *((int *)t11);
    t8 = (t6 + 10);
    t9 = (t0 + 6168);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t8;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3688U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

LAB59:    t14 = 0;

LAB62:    if (t14 < 3U)
        goto LAB63;
    else
        goto LAB61;

LAB63:    t5 = (t3 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t7))
        goto LAB60;

LAB64:    t14 = (t14 + 1);
    goto LAB62;

LAB65:    xsi_set_current_line(127, ng0);
    t9 = (t0 + 3112U);
    t11 = *((char **)t9);
    t6 = *((int *)t11);
    t8 = (t6 + 20);
    t9 = (t0 + 6168);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t8;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3688U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

LAB67:    t14 = 0;

LAB70:    if (t14 < 3U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t5 = (t3 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t7))
        goto LAB68;

LAB72:    t14 = (t14 + 1);
    goto LAB70;

LAB73:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 3112U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t1 = (t0 + 2952U);
    t7 = *((char **)t1);
    t19 = *((int *)t7);
    t26 = (t10 - t19);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t25, t26, 8);
    t9 = (t0 + 6232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 6168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 5976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9997);
    t2 = 1;
    if (3U == 3U)
        goto LAB79;

LAB80:    t2 = 0;

LAB81:    if (t2 != 0)
        goto LAB76;

LAB78:    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 10000);
    t2 = 1;
    if (3U == 3U)
        goto LAB87;

LAB88:    t2 = 0;

LAB89:    if (t2 != 0)
        goto LAB85;

LAB86:    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 10003);
    t2 = 1;
    if (3U == 3U)
        goto LAB95;

LAB96:    t2 = 0;

LAB97:    if (t2 != 0)
        goto LAB93;

LAB94:
LAB77:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 6488);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 3808U);
    t3 = *((char **)t1);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB74;

LAB76:    xsi_set_current_line(136, ng0);
    t9 = (t0 + 2472U);
    t11 = *((char **)t9);
    t6 = *((int *)t11);
    t8 = (t6 - 1);
    t9 = (t0 + 6296);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t8;
    xsi_driver_first_trans_fast(t9);
    goto LAB77;

LAB79:    t14 = 0;

LAB82:    if (t14 < 3U)
        goto LAB83;
    else
        goto LAB81;

LAB83:    t5 = (t3 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t7))
        goto LAB80;

LAB84:    t14 = (t14 + 1);
    goto LAB82;

LAB85:    xsi_set_current_line(139, ng0);
    t9 = (t0 + 2632U);
    t11 = *((char **)t9);
    t6 = *((int *)t11);
    t8 = (t6 - 1);
    t9 = (t0 + 6360);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t8;
    xsi_driver_first_trans_fast(t9);
    goto LAB77;

LAB87:    t14 = 0;

LAB90:    if (t14 < 3U)
        goto LAB91;
    else
        goto LAB89;

LAB91:    t5 = (t3 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t7))
        goto LAB88;

LAB92:    t14 = (t14 + 1);
    goto LAB90;

LAB93:    xsi_set_current_line(142, ng0);
    t9 = (t0 + 2792U);
    t11 = *((char **)t9);
    t6 = *((int *)t11);
    t8 = (t6 - 1);
    t9 = (t0 + 6424);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t8;
    xsi_driver_first_trans_fast(t9);
    goto LAB77;

LAB95:    t14 = 0;

LAB98:    if (t14 < 3U)
        goto LAB99;
    else
        goto LAB97;

LAB99:    t5 = (t3 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t7))
        goto LAB96;

LAB100:    t14 = (t14 + 1);
    goto LAB98;

}

static void work_a_2982189346_1149469521_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(166, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6552);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5864);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2982189346_1149469521_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(167, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6616);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5880);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2982189346_1149469521_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(168, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6680);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5896);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2982189346_1149469521_init()
{
	static char *pe[] = {(void *)work_a_2982189346_1149469521_p_0,(void *)work_a_2982189346_1149469521_p_1,(void *)work_a_2982189346_1149469521_p_2,(void *)work_a_2982189346_1149469521_p_3};
	xsi_register_didat("work_a_2982189346_1149469521", "isim/test_benach_isim_beh.exe.sim/work/a_2982189346_1149469521.didat");
	xsi_register_executes(pe);
}
