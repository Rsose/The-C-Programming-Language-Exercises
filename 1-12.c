/*
 * 编写一个程序，以每行一个单词的形式打印其输入。
 * */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, spaces;
    spaces = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (spaces == 0)
            {
                spaces = 1;
                putchar('\n');
            }
        }
        else
        {
            spaces = 0;
            putchar(c);
        }

    }
    return 0;
}
