#include <stdio.h>
#define N 6

// 函数声明
void quickSort(int arr[], int low, int high);
void swap(int arr[], int i, int j);

// 主函数
int main()
{
    int arr[N];
    int i;
    printf("please input %d numbers:",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    for (int i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}

// 快速排序函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high]; // 选取最后一个元素作为枢轴
        int i = low; // 较小元素的索引

        // 分区过程
        for (int j = low; j <= high - 1; j++) {
            // 如果当前元素小于或等于枢轴
            if (arr[j] >= pivot) {
                swap(arr, i, j);
                i++; // 增加较小元素的索引
            }
        }
        swap(arr, i, high);
        int pi = i;

        // 分别对左右子数组进行递归排序
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 交换两个整数
void swap(int arr[], int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}


