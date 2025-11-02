#include<stdio.h>
#include<time.h>

int f(int x)
{
    if (x == 1 || x == 2)
        return 1;
    else
        return f(x - 1) + f(x - 2);
}

int main()
{
    int i;
    clock_t start_time, end_time;
    double time_taken;

    start_time = clock();
    for (i = 0; i < 50; i++)
        printf("f(%d)=%d\n", i + 1, f(i + 1));
    end_time = clock();
    time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("the cost of time is %.3lf seconds\n", time_taken);
    return 0;
}


