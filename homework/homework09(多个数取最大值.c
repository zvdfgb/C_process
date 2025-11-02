//
// Created by mmm on 2025/9/26.
//利用嵌套函数，在五个数中取得最大值

#include<stdio.h>

int main()
{
    int min_2(int a,int b);
    int i;
    int min;
    int n[6]={};
    min =n[0];
    for(i=0;i<6;i++)
        scanf("%d",&n[i]);
    for(i=0;i<5;i++)
        min=min_2(n[i],n[i+1]);
    printf("max=%d\n",min);
    return 0;
}

int min_2(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}