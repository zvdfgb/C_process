//
// Created by mmm on 2025/9/29.
//输入五个数字并输出最大值
#include<stdio.h>

int main()
{
    int i,max;
    int a[5];
    int max_2(int a,int b);
    printf("input 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=max_2(max_2(max_2(max_2(a[0],a[1]),a[2]),a[3]),a[4]);
    printf("the max:%d",max);
    return 0;
}

int max_2(int a,int b)
{
    return(a>=b?a:b);
}