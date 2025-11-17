//
// Created by mmm on 2025/11/10.
//
#include<stdio.h>
#include<string.h>

void search(char a[]);

int main()
{
    char line[100];
    printf("please input a line of words:");
    gets(line);
    search(line);
    return 0;
}

void search(char a[])
{
    int num=0,start,end;
    int lon[10]={0};//用于储存每个单词的长度
    char ch;
    char words[20][20] ={0};
    int pre =0;//0意味着空格，1意味着有字母；
    for(int i=0;(ch=a[i])!='\0';i++)
    {
//        if(pre==0 && ch==' ') //啥也不干
        if(pre==0 && ch!=' ')//进行一次单词的计数并记录单词开始的下标,记得将pre修改为1！！
        {
            num++;
            start=i;
            pre=1;
        }
//        if(pre==1 && ch!=' ') //啥也不干
        else if(pre==1 && ch==' ')
        {
            end=i;
            pre=0;
            lon[num-1] = end-start;
            strncpy(words[num - 1], &a[start], lon[num - 1]);//主要是这里没搞出来！！！
            words[num - 1][lon[num - 1]] = '\0';//同时保证words的每行最后一个为\0!!
        }
    }
    //找到最大长度并找到最长单词对应的下标
    int max_length = lon[0];
    int max_index = 0;
    for (int i = 1; i < num; i++)
    {
        if (lon[i] > max_length)
        {
            max_length = lon[i];
            max_index = i;
        }
    }
    printf("the longest word is %s ,and its length is %d\n", words[max_index], max_length);
}