//
// Created by mmm on 2025/10/21.
//
#include<stdio.h>

double fabs(double a);

int main()
{
    int height;
    double x,y;
    printf("please input the x and y:");
    scanf("%lf %lf",&x,&y);
    x = fabs(x);
    y = fabs(y);
    if((x-2)*(x-2)+(y-2)*(y-2) <= 1)
        height=10;
    else
        height=0;
    printf("the height of the building is %d",height);
    printf("\n");
    return 0;
}

double fabs(double a)
{
    if(a>=0)
        return a;
    else
        return -a;
}