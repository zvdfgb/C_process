#include<stdio.h>

int find_the_max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int main()
{
    int num;
    int i;
    int max;
    printf("please input three numbers:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &num); // Use the address of num
        if (i == 0)
            max = num;
        else
            max = find_the_max(num, max);
    }
    printf("max=%d\n", max);
    return 0;
}
