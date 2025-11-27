//
// Created by mmm on 2025/11/24.
//

#include<stdio.h>
#define N 9

void r_shift_1(int *a,int n)
{
    //因为数列的内存有限，所以向右移动一位会覆盖掉最右边的数列的值，所以需要一个中间变量储存最右边的值
    int t = *(a+n-1),*p;
    //从右往左，将左边的值覆盖到右边
    for(p=a+n-1;p>a;p--)
    {
        *p = *(p-1);
    }
    //最后将一开始覆盖掉的最右边的值放在第一位，终而完成一次环状数列的移动
    *a = t;
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
    //下面进行移动，将向右移动的函数循环执行M次
    void r_shift_1(int *a,int n);
    for(int i=0;i<m;i++)
    {
        r_shift_1(num,N);
    }
    //完成移动后，将数组进行打印，完成第三行的输出，
    printf("the sorted integer is:");
    for(int i = 0;i<N;i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}