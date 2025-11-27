//
// Created by mmm on 2025/11/24.
//

#include<stdio.h>

int main()
{
    int count(int y,int m,int d,int year);
    int sy,sm,sd;
    int ey,em,ed;
    printf("Please input the starting date:");
    scanf("%d-%d-%d",&sy,&sm,&sd);
    printf("Please input the ending date:");
    scanf("%d-%d-%d",&ey,&em,&ed);
    int result;
    result = count(ey,em,ed,ey) - count(sy,sm,sd,ey);
    printf("dis=%d",result);
    return 0;
}

//一个判断是否为闰年的函数，是则返回1，反之返回0
int isleap(int a)
{
    if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        return 1;
    else
        return 0;
}
int isleap(int a);

int count(int y,int m,int d,int year)
{
    int month_of_days[12] = {0,31,28,31,30,31,30,31,31,30,31,30};
    int leap_of_days[12]={0,31,29,31,30,31,30,31,31,30,31,30};
    int days = 0;
    if(isleap(y))
    {
        for(int i=0;i<=m;i++)
        {
            days += leap_of_days[i];
        }
        for(int j=year+1;j<=y;j++)
        {
            if(isleap(j))
            {
                days += 366;
            }
            else
            {
                days += 365;
            }
        }
        days += d;
        return days;
    }
    else
    {
        for(int i=0;i<=m;i++)
        {
            days += month_of_days[i];
        }
        for(int j=year+1;j<=y;j++)
        {
            if(isleap(j))
            {
                days += 366;
            }
            else
            {
                days += 365;
            }
        }
        days += d;
        return days;
    }
}