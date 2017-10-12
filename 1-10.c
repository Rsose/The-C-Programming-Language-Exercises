/*
 * 编写一个将输入复制到输出的程序，并将其中的制表符替换为\t,
 * 把回退符替换为\b，把反斜杠替换为\\。
 * 这样可以将制表符和回退符以可见的方式显示出来
 * */
#include <stdio.h>

int main()
{
    int cc, flag;

    while ((cc=getchar()) != EOF)
    {
        flag = 0;
        if (cc == '\\')
        {
             putchar('\\');
             putchar('\\');
             flag = 1;
        }
        if (cc == '\t')
        {
            putchar('\\');
            putchar('t');
            flag = 1;
        }
        if (cc == '\b')
        {
            putchar('\\');
            putchar('\\');
            flag = 1;
        }
        if (flag == 0)
            putchar(cc);
    }
    return 0;
}
