//
// Created by mmm on 2025/11/10.
//
#include<stdio.h>
#include<string.h>

void insert_sorting(char a[][10],int len);


int main()
{
    char nation[][10] = {"CHINA","USA","RUSSZA","UK","FRANCE"};
    printf("the sorted array is:\n");
    insert_sorting(nation,5);
    for(int i=4;i>=0;i--)
    {
        printf("%s\n",nation[i]);
    }
    return 0;
}

void insert_sorting(char a[][10],int len)   //二维数组无法使用strlen()这个用法，注意！！！！
{
    int i,j;
    char mid[10];
    for(i=1;i<len;i++)
    {
        strcpy(mid,a[i]);  //注意是将a[i]的值给mid，注意不要搞反了！！！
        for(j=i-1;j>=0;j--)
        {
            if(strcmp(a[j],mid)>0)//还有另一个写法，即合并同类项，将if的条件放进for循环里！！！
                strcpy(a[j+1],a[j]);
            else
                break;
        }
        strcpy(a[j+1],mid);
    }
}
