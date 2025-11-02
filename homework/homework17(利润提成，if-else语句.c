//
// Created by mmm on 2025/10/15.
//
#include<stdio.h>

int main()
{
    double I,bonus;
    printf("please input the I:");
    scanf("%lf",&I);
    //计算前面满区间里的利润
    if(I>1e5)
        bonus += 1e5*0.1;
    if(I>2e5)
        bonus += 1e5*0.075;
    if(I>4e5)
        bonus += 2e5*0.05;
    if(I>6e5)
        bonus += 2e5*0.03;
    if(I>1e6)
        bonus += 4e5*0.015;
    //额外金额接下来计算
    if(I<=1e5)
        bonus += I * 0.1;
    else if(I<=2e5)
        bonus += (I-1e5)*0.075;
    else if(I<=4e5)
        bonus += (I-2e5)*0.05;
    else if(I<=6e5)
        bonus += (I-4e5)*0.03;
    else if(I<=1e6)
        bonus += (I-6e5)*0.015;
    printf("your bonus is %.2lf",bonus);
    return 0;
}