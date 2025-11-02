//
// Created by mmm on 2025/9/26.
//计算一个数值
#include<stdio.h>

int main()
{
    int num_1;
    int num_2;
    int num_3;
    int i;
    int num;
    for(i=1;i<=50;i++)
        num_1=num_1+i;
    for(i=1;i<=50;i++)
        num_2=num_2+i*i;
    for(i=1;i<=10;i++)
        num_3=num_3+1/i;
    num=num_1+num_2+num_3;
    printf("%d",num);
    return 0;
}