#include<stdio.h>
#include<math.h>

int main()
{
    int a, n, i, j;
    int sum = 0, num = 0;
    printf("please input the a and n: ");
    scanf("%d %d", &a, &n);
    printf("%d", a);
    for (i = 1; i <= n; i++)
    {
        num = 0; // 必须在每个循环开始时更新num的值，防止num的值不断被累积
        for (j = 1; j <= i; j++)
        {
            num += a * (int)pow(10, j - 1);
        }
        if (i > 1)
        {
            printf("+%d", num);
        }
        sum += num;
    }
    printf(" = %d\n", sum);
    return 0;
}


