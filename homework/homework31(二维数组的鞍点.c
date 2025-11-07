//
// Created by mmm on 2025/11/3.
//
#include<stdio.h>
#define X 3
#define Y 3

int main()
{

    int a[X][Y] = {{1,2,9},
                   {4,5,6},
                   {7,8,9},
    } ;
    int i,j,k,index;
    int max;
    int ishave = 0;
    for(i=0;i<X;i++)
    {
        max = a[i][0];
        index = 0;
        for (j = 0; j < Y; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
                index = j;
        }
        int have = 1;
        for (k = 0; k < Y; k++)
        {
            if (a[k][index] < max)
            {
                have = 0;
            }
        }
        if (have)
        {
            printf("the saddle number is %d,on the %dth of X,the %dth of Y\n",max, i + 1, index + 1);
            ishave = 1;
        }
    }
    if(ishave==0)
        printf("no saddle number!");

    return 0;
}

