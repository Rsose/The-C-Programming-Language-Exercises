/*
 * 编写一个将输入复制到输出的程序，
 * 并将其中连续的多个空格用一个空格代替
 *
 */
#include <stdio.h>

int main()
{
    int cc;
    int spaces;

    spaces = 0;
    while((cc = getchar()) != EOF)
    {
        if (cc == ' ')
        {
            if (spaces == 0)
            {
                spaces = 1;
                putchar(cc);
            }
        }
        else
        {
            spaces = 0;
            putchar(cc);
        }
    }

    return 0;
}
