//
// Created by mmm on 2025/10/10.
//
//

#include<stdio.h>

int main()
{
    int min_2(int a,int b);
    int i;
    int n[6]={};
    scanf("%d %d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5]);
    int min=n[1];
    for(i=1;i<6;i++)
        min=min_2(min,n[i-1]);
    printf("min=%d\n",min);
    return 0;
}

int min_2(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
