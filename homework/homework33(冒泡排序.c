//
// Created by mmm on 2025/11/5.
//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100000

int main()
{
    //随机生成100000个数字并将其储存到数组中
    int a[N]; //声明储存随机数的数组
    srand((unsigned int)time(NULL));
    //初始化随机种子
    for(int i=0;i<N;i++)
        a[i] = rand() % 100000;
    //0~99999的随机数，防止数字太大或太小
    //下面进行冒泡排序，并计时
    clock_t start_1 = clock();
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
    clock_t end_1 = clock();
    double duration_1 = (double)(end_1-start_1)/CLOCKS_PER_SEC;
    //将完成排序的数列打印出来！！！！！
    int m;
    printf("the final array is:");
    for(m=0;m<N;m++)
    {
        printf("%d ",a[m]);
    }
    printf("\n");
    printf("the cost of time is %lf",duration_1);
    return 0;
}