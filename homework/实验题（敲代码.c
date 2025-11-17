//
// Created by mmm on 2025/11/13.
//

#include<stdio.h>
#include<math.h>

int process(int n,int k);

int main()
{
    int n,k;
    int i = 0;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        int result = process(n, k);
        printf("%d\n", result);
    }
    return 0;
}

int process(int n,int k)
{
    if(k == 1)
    {
        return n;  // k=1 时，sum = i + i + ... +i（共i项）=i*i ≥n → 最小i是n
    }
    int i,j;
    for(i=1;i<=n;i++)
    {
        long long num=0;//每个循环都要初始化
        long long m = i;
        int p =0;
        while(m > 0)
        {
            num += m;
            if(num>=n)
            {
                return i;
            }
            p++;
            m = i/(long long)(pow(k,p));
        }
    }
    return n;
}