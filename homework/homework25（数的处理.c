//
// Created by mmm on 2025/10/23.
//
#include<stdio.h>
#include<math.h>

int main()
{
    int a,t,bit=0,weight=0;
    printf("please input a number:");
    scanf("%d",&a);
    t = a;
    printf("in reverse:");
    do
    {
        printf("%d",t%10);
        bit++;
        if(weight==0) weight=1;
        else weight *= 10;
        t/=10;
    }while(t>0);
    printf("\n");
    printf("it is a/an %d-digit number\n",bit);
    printf("each digit is:");
    t=a;
    do
    {
        printf("%d",t/((int)pow(10,bit-1)));
        printf(" ");
        t %= (int)pow(10,bit-1);
        bit--;
    }while(bit>=1);
    printf("\n");
    return 0;
}