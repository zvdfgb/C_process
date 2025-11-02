//
// Created by mmm on 2025/10/15.
//

#include<stdio.h>

int main()
{
    double I,result =0.0;
    int index;
    printf("please input your I:");
    scanf("%lf",&I);
    if(I>1e6)
        index = 10;
    else
        index = (int)(I / 1e5);
    switch(index)
    {
        case 10: result +=(I-10e5)*0.01;
        case 9 : ;
            if (I >= 9e5 && I <= 10e5)
                result +=(I-10e5)*0.015;
            else
                result += 1e5*0.015;
        case 8 :
            if (I >= 8e5 && I <= 9e5)
                result +=(I-9e5)*0.015;
            else
            result += 1e5*0.015;
        case 7 :
            if (I > 7e5 && I < 8e5)
                result +=(I-8e5)*0.015;
            else
                result += 1e5*0.015;
        case 6 :
            if (I > 6e5 && I < 7e5)
                result +=(I-7e5)*0.015;
            else
                result += 1e5*0.015;
        case 5 :
            if (I > 5e5 && I < 6e5)
                result +=(I-6e5)*0.03;
            else
                result += 1e5*0.03;
        case 4 :
            if (I > 4e5 && I < 5e5)
                result +=(I-5e5)*0.03;
            else
                result += 1e5*0.03;
        case 3 :
            if (I > 3e5 && I <4e5)
                result +=(I-4e5)*0.05;
            else
                result += 1e5*0.05;
        case 2 :
            if (I  >2e5 && I < 3e5)
                result +=(I-3e5)*0.05;
            else
                result += 1e5*0.05;
        case 1 :
            if (I > 1e5 && I < 2e5)
                result +=(I-2e5)*0.075;
            else
                result += 1e5*0.075;
        case 0 :
            if (I >=0e5 && I < 1e5)
                result +=(I-1e5)*0.1;
            else
                result += 1e5*0.1;
        break;
    }
    printf("your bonus is %.2lf\n",result);
    return 0;


}