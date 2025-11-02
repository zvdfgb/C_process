//
// Created by mmm on 2025/10/28.
//

#include<stdio.h>
#include<time.h>
#define num 1000000

int isprime_1(int n);
int isprime_2(int n);
int isprime_3(int n);

int isprime_1(int n)
{
    int i;
    if(n==1) return 0;
    if(n==2) return 1;
    for(i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int isprime_2(int n)
{
    int i;
    if(n==1||n==4) return 0;
    if(n==2||n==3) return 1;
    for(i=2;i*i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int isprime_3(int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i <n; i += 2)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    //111111
    int j,n=0;
    printf("the first method\n");
    clock_t start_1 = clock();
    for(j=1;j<=num;j++)
    {
        if(isprime_1(j)) n++;
    }
    printf("a total of %d\n",n);
    clock_t end_1 = clock();
    double duration_1 = (double)(end_1-start_1)/CLOCKS_PER_SEC;
    printf("the time is %lf\n",duration_1);

    //222222222222
    n=0;
    printf("the second method\n");
    clock_t start_2 = clock();
    for(j=1;j<=num;j++)
    {
        if(isprime_2(j)) n++;
    }
    printf("a total of %d\n",n);
    clock_t end_2 = clock();
    double duration_2 = (double)(end_2-start_2)/CLOCKS_PER_SEC;
    printf("the time is %lf\n",duration_2);
    n=0;

    //333333333333
    printf("the third method\n");
    clock_t start_3 = clock();
    for(j=1;j<=num;j++)
    {
        if(isprime_3(j)) n++;
    }
    printf("a total of %d\n",n);
    clock_t end_3 = clock();
    double duration_3 = (double)(end_3-start_3)/CLOCKS_PER_SEC;
    printf("the time is %lf\n",duration_3);
    return 0;

}