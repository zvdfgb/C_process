//
// Created by mmm on 2025/11/5.
//
#include<stdio.h>
#define N 5
// 函数声明
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int arr[], int i, int j);

// 主函数
int main() {
    int arr[N];
    int i;
    printf("please input the array:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    quickSort(arr, 0, N-1);
    printf("the sorted array: ");
    for (int i=0; i<N; i++)
        printf("%d ", arr[i]);
    return 0;
}

// 快速排序函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi 是分区索引，arr[pi] 已经处于正确的位置
        int pi = partition(arr, low, high);

        // 分别对左右子数组进行递归排序
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 分区函数
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 选取最后一个元素作为枢轴
    int i = (low - 1); // 较小元素的索引

    for (int j = low; j <= high- 1; j++) {
        // 如果当前元素小于或等于枢轴
        if (arr[j] >= pivot) {
            i++; // 增加较小元素的索引
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}

// 交换两个整数
void swap(int arr[], int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}


