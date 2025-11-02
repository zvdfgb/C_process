//
// Created by mmm on 2025/10/16.
//
#include <stdio.h>

int main()
{
    char ch;
    printf("mingwenwei:");
    // 将第一次输出分出循环，以实现格式输出的要求
    ch = getchar();
    printf("miwenshi:");
    while (ch != '\n' )
    {
        // 下列进行明文转密文,即替换为字母本身的后面第四位
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (ch >= 'A' && ch <= 'Z')
                ch = (ch - 'A' + 4) % 26 + 'A';
            else
                ch = (ch - 'a' + 4) % 26 + 'a';
        }
        putchar(ch);
        ch = getchar();
    }
    return 0;
}