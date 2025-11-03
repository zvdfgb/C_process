//
// Created by mmm on 2025/11/3.
//
#include<stdio.h>
#define N 100000000

int a[N+1];
int main()
{
    int i,j,count=0;
    for(i=3;i*i<=N;i+=2)
    {
        if (a[i]) continue;
        for (j = i * i; j <= N; j += 2 * i)
            if (!a[j]) a[j] = 1;
    }
    count = (N>=2)?1:0;
    for(i=3;i<=N;i+=2)
        if(!a[i]) count++;
    printf("the total nmubner of prime number in %d is %d",N,count);
    return 0;
}