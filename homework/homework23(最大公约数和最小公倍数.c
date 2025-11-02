//
// Created by mmm on 2025/10/21.
//
#include<stdio.h>

int gcd(int u,int v);
int gcm(int u,int v);

int main()
{
    int u,v;
    int md,mm;
    printf("please input two nonnegative integers:");
    scanf("%d %d",&u,&v);
    md= gcd(u,v);
    mm =gcm(u,v);
    printf("the greatest common divisor is %d\n",md);
    printf("the least multiple is %d\n",mm);
    return 0;
}

int gcd(int u,int v)
{
    int r;
    while(v!=0)
    {
        r=u%v;
        u=v;
        v=r;
    }
    return(u);
}

int gcm(int u,int v)
{
    int md,mm;
    md =gcd(u,v);
    mm=(u*v)/md;
    return(mm);

}