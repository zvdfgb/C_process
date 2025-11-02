#include<stdio.h>


int main()
{
    int isleap(int a);
    int sy = 1900, ty = 1981;
    int i, n = 0;
    printf("the leap years between 2000 to 2100 have:\n");
    for(i = sy; i <= ty; i++)
        if(isleap(i))
        {
            printf("%d ", i);
            n++;
            if(n % 10 == 0)
                printf("\n");
        }
    if(n % 10 != 0)
        printf("\n");
    printf("The number of leap years is %d\n", n);
    return 0;
}

int isleap(int a)
{
    if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        return 1;
    else
        return 0;
}

