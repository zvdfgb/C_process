//
// Created by mmm on 2025/9/25.
//
//根据三角形的三条边长计算三角形的面积
#include<stdio.h>

#include<math.h>

int main()
{
    double a,b,c,s,area;
    printf("input three sides of a triangle:");
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("a=%lf\tb=%lf\tc=%lf\n", a, b, c);
        printf("area=%f\n", area);
    }
    else{
        printf("The given sides do not form a valid triangle.\n");
    }
    return 0;
}