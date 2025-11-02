//
// Created by mmm on 2025/10/15.
//
#define pi 3.1415926525
#include<stdio.h>

int main()
{
    double r ,h;
    printf("please input the dates:");
    scanf("%lf %lf", &r, &h);
    //输入数据
    double C,S,SB,V,VZ;
    //C是圆周长，S是圆面积，SB是圆球表面积，V是圆球体积，VZ是圆柱体积
    C = 2 * pi * r;
    S = pi * r * r;
    SB = 4 * pi * r * r;
    V = (4.0/3) * pi * r * r * r;
    VZ = S * h;
    //计算数据
    printf("C is %.3lf\n",C);
    printf("S is %.3lf\n",S);
    printf("SB is %.3lf\n",SB);
    printf("V is %.3lf\n",V);
    printf("VZ is %.3lf\n",VZ);
    //打印结果
    return 0;

}