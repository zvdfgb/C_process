//
// Created by mmm on 2025/11/17.
//
#include<stdio.h>
#define M 3  //三个学生
#define N 5  //五个课程
float max = 0;
int h_s,h_c; //声明变量，用于储存最高分数所对应的学生和课程
void process_ave_1(float score[M][N],float ave_s[M]);
void process_ave_2(float score[M][N],float ave_c[N]);
void highest(float score[M][N]);
double var(float ave_s[M]);

int main()
{
    float score[M][N] = {{70.0,70.0,70.0,70.0,70.0},
                         {70.0,70.0,70.0,70.0,70.0},
                         {70.0,70.0,70.0,70.0,70.0}
    };//用于储存每个学生的成绩！！！
    float ave_s[M],ave_c[N];//用于储存每个学生的平均分，和每个课程的平均分！！
    process_ave_1(score,ave_s);
    process_ave_2(score,ave_c);
    highest(score);
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%g ",score[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<M;i++)
    {
        printf("the average score of the %dth student is %g\n",i+1,ave_s[i]);
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("the average score of the %d project is %g\n",i+1,ave_c[i]);
    }
    printf("\n");
    printf("the highest score is %g,the %dth student,the %dth project\n",max,h_s+1,h_c+1);
    printf("\n");
    printf("the fangcha of average scores is %g", var(ave_s));
    printf("\n");
    return 0;
}

void process_ave_1(float score[M][N],float ave_s[M])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        int sum = 0;
        for(j=0;j<N;j++)
        {
            sum += score[i][j];
        }
        ave_s[i] = sum/(N*1.0);
    }
}

void process_ave_2(float score[M][N],float ave_c[N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        int sum = 0;
        for(j=0;j<M;j++)
        {
            sum += score[j][i];
        }
        ave_c[i] =  sum/(M*1.0);
    }
}

void highest(float score[M][N])
{
    h_s = 0;
    h_c = 0;
    int i,j;
    max = score[0][0];
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(score[i][j]>max)
            {
                h_s = i;
                h_c = j;
            }
        }
    }
}

double var(float ave_s[M])
{
    float sum = 0;
    float sum_2 =0;
    int i;
    for(i=0;i<M;i++)
    {
        sum += ave_s[i];
        sum_2 += ave_s[i]*ave_s[i];
    }
    return sum_2/M-(sum/M)*(sum/M);
}


