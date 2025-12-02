#include <stdio.h>

int isleap(int a);
int count_days_from_zero(int y, int m, int d);

int main()
{
    int sy, sm, sd;
    int ey, em, ed;

    printf("Please input the starting date:");
    scanf("%d-%d-%d", &sy, &sm, &sd);

    printf("Please input the ending date:");
    scanf("%d-%d-%d", &ey, &em, &ed);

    int result;
    result = count_days_from_zero(ey, em, ed) - count_days_from_zero(sy, sm, sd);
    printf("dis=%d\n", result);
    return 0;
}

int isleap(int a)
{
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        return 1;
    else
        return 0;
}

int count_days_from_zero(int y, int m, int d)
{
    int month_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for (int i = 1; i < y; i++)
    {
        if (isleap(i))
            total_days += 366;
        else
            total_days += 365;
    }

    for (int i = 1; i < m; i++)
    {
        total_days += month_days[i];
        if (i == 2 && isleap(y))
        {
            total_days += 1;
        }
    }
    total_days += d;
    return total_days;
}