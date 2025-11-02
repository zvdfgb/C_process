//
// Created by mmm on 2025/9/25.
//输入成绩的等第输出成绩的范围
#include<stdio.h>

int main()
{
    char grade;
    printf("Please enter your rank:");
    scanf("%c",&grade);
    printf("Your score:");
    switch(grade)
    {
        case'A':printf("85~100\n");break;
        case'B':printf("70~84\n");break;
        case'C':printf("60~69\n");break;
        case'D':printf("<60\n");break;
        default:printf("enter data error!\n");
    }
    return 0;
}
