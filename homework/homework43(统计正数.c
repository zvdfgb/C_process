//
// Created by mmm on 2025/12/1.
//
#include<stdio.h>

#define STRING_SIZE 100

int i=0;

void input(char string[])
{
    int ch;
    while (i < STRING_SIZE - 1 && (ch = getchar()) != '\n' && ch != EOF) {
        string[i] = (char)ch;
        i++;
    }
    string[i] = '\0';
}

int compute(char string[])
{
    int num=0;
    for(int j=1; j<i; j++)
    {
        if(string[j]==' ' && string[j-1]!=' ')
        {
            num++;
        }
    }
    if(i > 0 && string[i-1] != ' ')
    {
        num++;
    }
    return num;
}

int main()
{
    void input(char string[]);
    int compute(char string[]);
    char string[STRING_SIZE];
    printf("Please input a string:");
    input(string);
    printf("The total count of words is: %d\n", compute(string));
    return 0;
}