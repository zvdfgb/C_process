//
// Created by mmm on 2025/12/1.
//
#include<stdio.h>
#define N 5

int main()
{
    void sort(int arr[N][N]);
    int find_max(int arr[N][N]);
    //生成原始的数据。
    int a[N][N];
    int k = N*N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            a[i][j] = k--;
        }
    }
    //下面进行四次冒泡排序，并将四个最小值放在四个角，和交换位置从而将四个最小值的一个最大值找出来
    sort(a);
    //将p作为二维数组展开为一维数组的首元素的地址
    int *p = &a[0][0];
    //将第二小的数交换到右上角
    int temp1 = *(p+1);
    *(p+1) = *(p+N-1);
    *(p+N-1) = temp1;
    //将第三小的数交换到左下角
    int temp2 = *(p+2);
    *(p+2) = *(p+N*N-N);
    *(p+N*N-N) = temp2;
    //将第四小的数放在右下角
    int temp3 = *(p+3);
    *(p+3) = *(p+N*N-1);
    *(p+N*N-1) = temp3;
    //排序四次进行排序
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if((i==0&&j==0)||(i==N-1&&j==N-1)||(i==0&&j==N-1)||(i==N-1&&j==0))
            {
                printf("%4d",a[i][j]);
            }
            else if(i==N/2&&j==N/2)
            {
                printf("%4d", find_max(a));
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }


}

//进行排序的函数，注意只需要排序四次就好了
void sort(int arr[N][N])
{
    int n = N*N;
    int *p = &(arr[0][0]);
    for(int i=0;i<4;i++)
    {
        for(int j=n-1;j>0+i;j--)
        {
            if(*(p+j) < *(p+j-1))
            {
                int temp = *(p+j);
                *(p+j) = *(p+j-1);
                *(p+j-1) = temp;
            }
        }
    }
}


//用来寻找最大值的函数，最后只需要将最大值直接打印到中间就好了
int find_max(int arr[N][N])
{
    int max = arr[0][0];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

