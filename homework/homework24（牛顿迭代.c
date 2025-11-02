//
// Created by mmm on 2025/10/22.
//
#include<stdio.h>
#define E 1e-7

double f(double x)
{
    return(2*x*x*x-4*x*x+3*x-2);
}

double df(double x)
{
    return(6*x*x-8*x+3);
}

int main()
{
    double target = 1.5;
    double root;
    do
    {
        root = target - f(target)/df(target);
        if(-E<root-target && root-target<E)
        {
            break;
        }
        target = root;//要在每个循环中都更新target的值为root
    }while(1);
    printf("the root is %.6lf\n",root);
    return 0;
}