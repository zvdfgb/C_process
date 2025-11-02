//
// Created by mmm on 2025/9/24.
//
#include<stdio.h>

int main()
{
    int age;
    printf("what is your age?");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are a adult!");

    }
    else
    {
        printf("you are a child");
    }
    return 0;
}