//
// Created by mmm on 2025/11/5.
//
#include<stdio.h>
#define N 5

int main()
{
    //完成输入的过程并将其储存到数组中
    int a[N];
    int i;
    printf("please input %d numbers:",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    //下面进行冒泡排序
    int j,k,z;
    for(j=0;j<N-1;j++)
    {
        for(k=0;k<N-1-j;k++)
        {
            if (a[k] > a[k + 1])
            {
                z=a[k];
                a[k]=a[k+1];
                a[k+1]=z;
            }
        }
    }
    //将完成排序的数列打印出来！！！！！
    int m;
    printf("the final array is:");
    for(m=0;m<N;m++)
    {
        printf("%d ",a[m]);
    }
    printf("\n");
    return 0;
}