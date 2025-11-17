//
// Created by mmm on 2025/11/17.
//
#include<stdio.h>

double fn(int n,double x)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return x;
    }
    else
    {
        return (2*n-1)*x*fn(n-1,x)+ 1.0*(n-1)*fn(n-2,x)/(n*1.0);
    }
}

double fn(int n,double x);

int main()
{
    int n;
    double x;
    printf("Please input n and x:");
    scanf("%d %lf", &n, &x);
    double result;
    result = fn(n,x);
    printf("P(%d,%g):%g",n,x,result);
    return 0;
}