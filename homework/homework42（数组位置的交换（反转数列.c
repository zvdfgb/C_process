//
// Created by mmm on 2025/11/24.
//

#include<stdio.h>
#define N 9
//这个函数可以进行对数组的一定范围倒着排序
void inv(int *a,int left,int right)
{
    int *p=a+left,*q=a+right,t;
    for(;p<q;p++,q--)
    {
        t=*p;
        *p=*q;
        *q=t;
    }
}

int main()
{
    //完成第一行的输出，即打印原数组
    printf("The integer is :");
    int num[N] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0;i<N;i++)
    {
        printf("%d",num[i]);
    }
    printf("\n");
    //打印第二行的输出，即输入移动的位数！
    printf("Please input the numbers of moving steps----m:");
    int m;
    scanf("%d",&m);
    m = m % N;//关键步骤，因为每移动N位则回到原位，所以可以通过取模简化运算
    //下面进行对数组的移动,关键是这个步骤自己写不出来，通过三次反转数列顺序巧妙地完成数组的移动，也能想通并理解，但是要自己想就想不出来
    void inv(int *a,int left,int right);
    inv(num,0,N-m-1);
    inv(num,N-m,N-1);
    inv(num,0,N-1);
    //完成移动后，将数组进行打印，完成第三行的输出，
    printf("the sorted integer is:");
    for(int i = 0;i<N;i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}