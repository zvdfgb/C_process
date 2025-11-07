//
// Created by mmm on 2025/11/4.
//
#include<stdio.h>

int main()
{
    //创建一个足够大的数组以插入新的元素，并且使用循环使其持续输入直至输入回车！！
    int index = 9;
    int a[11] = {1,3,4,5,7,8,9,10,11,12};
    //输入x的值
    int x;
    printf("please input the x:");
    scanf("%d",&x);
    //通过循环找出插入的x应该所处的位置
    int i;
    int no;
    for(i=0;i<=index;i++)
    {
        if(x>a[i])
        {
            no = i+1;
        }
    }
    //将x后面的值全部往后移位，并将x的值插入数列
    int j;
    for(j=index;j>=no;j--){
        a[j+1]=a[j];
    }
    a[no] = x;
    //将数列打印出来
    int k;
    printf("the result is:");
    for(k=0;k<=index+1;k++)
    {
        printf("%d ",a[k]);
    }
    return 0;
}