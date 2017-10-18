/*
 * Write a program to print a histogram of the frequencies of different characters
 * in its input.
 * Note: 这里做个范围缩减，默认为0-9这十个字符，否则所有字符工作量太大
 */

#include <stdio.h>

#define MAXCHARLEN 10

int main()
{
    int c;

    int lengtharr[MAXCHARLEN];

    int thisval = 0;
    int maxval = 0;
    int x_axis = 0;
    int done = 0;


    // 初始化数组默认值
    for (x_axis = 0; x_axis < MAXCHARLEN; x_axis++)
    {
        lengtharr[x_axis] = 0;
    }

    while (done == 0)
    {
        c = getchar();

        if (c == ' ' || c == '\t' || c == '\n' || c == EOF)
        {
            if (c == EOF)
            {
                done = 1;
            }
        }
        else
        {
            thisval =  ++lengtharr[c - '0'];
            if (thisval > maxval)
            {
                maxval = thisval;
            }
        }
    }

    // 图形打印
    // 通过thisval这个过程量与lengtharr[x_axis]比较，判断是否打印“*”
    for (thisval = maxval; thisval > 0; thisval--)
    {
        printf(" %4d| ", thisval);
        for (x_axis = 0; x_axis < MAXCHARLEN; x_axis++)
        {
            if (lengtharr[x_axis] >= thisval)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("     +");
    for (x_axis = 0; x_axis < MAXCHARLEN; x_axis++)
    {
        printf("---");
    }
    printf("\n      ");
    for (x_axis = 0; x_axis < MAXCHARLEN; x_axis++)
    {
        printf("%2d ", x_axis);
    }

    return 0;
}
