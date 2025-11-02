#include <stdio.h>
#define m 100

int main()
{
    char ch;
    char result[m];
    int index = 0;
    //定义最大的长度，并用数组储存结果，以完成统一的输出
    printf("mingwenwei:");
    // 将第一次输出分出循环，以实现格式输出的要求
    ch = getchar();
    while (ch != '\n' && index < m - 1)
    {
        // 下列进行明文转密文,即替换为字母本身的后面第四位
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (ch >= 'A' && ch <= 'Z')
                ch = (ch - 'A' + 4) % 26 + 'A';
            else
                ch = (ch - 'a' + 4) % 26 + 'a';
        }
        result[index++] = ch;
        //将每一个加密后的字符一一储存到rusult数组里
        ch = getchar();
    }
    result[index] = '\0'; // 确保字符串结束

    printf("miwenwei:%s\n",result);
    return 0;
}