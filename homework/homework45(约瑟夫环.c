//
// Created by mmm on 2025/12/2.
//
#include<stdio.h>

int main()
{
    int num;//作为约瑟夫环的总人数
    printf("Please input the sum of people(1~100):");
    scanf("%d",&num);
    int step;
    printf("Please input the step(1~10):");
    scanf("%d",&step);
    int after[100];
    int before[100];//申明一个数列，after[i]=i+1的意义是编号为i的人后面一个活着的人的编号为i+1，后面同理
    //第一步，进行初始化,即所有人都活着，所以after[i]=(i+1)%num;
    for(int i=0;i<num;i++)
    {
        after[i]= (i+1)%num;
    }
    for(int j=0;j<num;j++)
    {
        if(j==0)
        {
            before[j] = num-1;
        }
        else
        {
            before[j] = j-1;
        }
    }
    //接下来要进行杀人了
    int count = 0;//作为报数的一个计数变量
    int i = 0;//从零开始报数
    int m=0;
    while(num>0)//只要人数大于零，就不停杀，直到杀完为止
    {
        count++;
        if(count==step)
        {
            //当数到三的时候，开始杀
            num--;//将人数减去一个
            printf("%3d ",i+1);//并将这个人的编号打出来
            m++;
            after[before[i]] = after[i];//对这个死掉的人进行除名，即序号i-1后面一个活着的人是被杀掉序号为i后面活着的人
            before[after[i]] = before[i];
            count =0;//最后将计数器归零
        }
        i = after[i];//循环最后切换到下一个活着的人
        if(m==10)
        {
            printf("\n");
            m=0;
        }
    }
}