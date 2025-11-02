//
// Created by mmm on 2025/10/27.
//
#include<stdio.h>
#define M 789



int isperfect(int n)
{
    int i,sum = 1;
    for(i=2;i*i<n;i++)
    {
        if(n%i==0) sum += i + n/i;
        if(sum>n) return 0;
    }
    if(i*i==n) sum += i;
    if(n<=4) return 0;
    if(n>4)
    {
        if(sum==n)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int isperfect(int n);
    int j,m,n=0;
    printf("perfect numbers in 1000000 include:\n");
    for(j=1;j<=M;j++)
    {
        if(isperfect(j))
        {
            printf("%d\t",j);
            printf("its factors include:");
            for(m=1;m<=j;m++)
            {
                if(j%m==0)
                    printf("%d  ",m);
            }
            n++;
            printf("\n");
        }
        else
            continue;
    }
    printf("a total of %d",n);
    return 0;
}