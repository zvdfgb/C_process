//
// Created by mmm on 2025/9/25.
//
//设a,b,c分别为二次函数二次项，一次项，常数项的系数，下列程序将通过a,b,c的值判断二次函数是否有解,并解出二次函数的解
#include<stdio.h>

#include<math.h>

int main()
{
    double a,b,c,disc,x_1,x_2,p,q;
    printf("Please enter the values of a,b,c：");
    scanf("%lf %lf %lf",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc<0)
        printf("This equation hasn't real roots\n");
    else
    {
        p=-b/(2.0*a);
        q=sqrt(disc)/(2.0*a);
        x_1=p+q;
        x_2=p-q;
        printf("real roots:\nx_1=%7.2f\nx_2=%7.2f\n",x_1,x_2);
    }
    return 0;


}