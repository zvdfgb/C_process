//
// Created by mmm on 2025/10/10.
//
#include<stdio.h>

int min_2(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}

int main()
{
    int min_2(int a,int b);
    int min;
    int m,n;
    for(n=0;n<5;n++)
    {
        scanf("%d",&m);
        if(n==0)
            min =m;
        else
            min= min_2(min,m);
    }
    printf("min=%d",min);
    return 0;
}