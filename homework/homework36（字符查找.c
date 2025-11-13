//
// Created by mmm on 2025/11/10.
//
#include<stdio.h>
#include<string.h>

int ok(int len_1,int len_2,char str_1[],char str_2[],int *index);


int main()
{
    char str_1[] = "ababbab";
    int len_1 = strlen(str_1);
    char str_2[10];
    printf("mu biao kuai wei: %s\n",str_1);
    printf("please input a string:");
    gets(str_2);
    int len_2 = strlen(str_2);
    int match_index=0;
    if(ok(len_1,len_2,str_1,str_2,&match_index))
    {
        printf("match successfully,the index is %d ",match_index);
    }
    else
        printf("match unsuccessfully!");
    return 0;
}

int ok(int len_1,int len_2,char str_1[],char str_2[],int *index)
{
    int j;
    for(int i=0;i<len_1-len_2;i++)
    {
        for(j=0;j<len_2;j++)
        {
            if(str_1[j+i]!=str_2[j]) break;
        }
        if(j==len_2)
        {
            *index = i;
            return 1;
        }
    }
    return 0;
}