//
// Created by mmm on 2025/10/17.
//

#include<stdio.h>
#include <intrin.h>

int main()
{
    char str_01[100];
    char str[100]={"beijing\nchina\0"};
    puts(str);
    gets(str_01);
    puts(str_01);
    printf("%s",strcat(str,str_01));
    strcpy(str,str_01);
    if(stccmp(str,str_01)>0)
        printf("yes");
    else
        printf("no");
    return 0;
}