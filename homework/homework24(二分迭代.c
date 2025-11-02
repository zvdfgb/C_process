//
// Created by mmm on 2025/10/22.
//
#include<stdio.h>
#define E 1e-7

double f(double x)
{
    return(2*x*x*x-4*x*x+3*x-2);
}

int main()
{
    double target = 1.5;
    double step = 0.1;
    double eps = E;
    double mid,root;
    double left =target;
    double right = target;
    while(f(left)*f(right)>=0)
    {
        left -= step;
        right += step;
    }
    while((right-left)>eps)
    {
        mid = (left + right) / 2;
        if (f(mid) * f(left) < 0)
            right = mid;
        else
            left = mid;
    }
    root = left;
    printf("the root is %.6lf",root);
    printf("\n");
    return 0;
}




