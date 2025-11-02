//
// Created by mmm on 2025/9/26.
//找出1000以内的完数
//完数是因子之和恰好是本身的数
#include<stdio.h>

int main()
{
    int i;
    int n;
    int num;
    for(i=2;i<=1000;i++)
    {   num =0;
        for(n=1;n<i;n++){
            if (i % n == 0)
                num = num + n;
        }
        if (num == i)
            printf("wanshushi:%d\n",num);
    }
    return 0;
}