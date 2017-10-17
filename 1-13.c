/*
 * Write a program to print a histogram of the lengths of words in its input. It is
 * easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 * */

#include <stdio.h>

#define MAXWORDLEN 12

int main()
{
    int c, spaces;
    spaces = 0;	            // spaces 代表当前字符是否在单词中，0代表无空格即在单词中，1则代表在单词中
    int lengtharr[MAXWORDLEN + 1];      // 保存各个单词长度的数组
    int wordlen = 0;

    int thisval = 0;        // 打印柱型图时的过程量
    int maxval = 0;         // 每种单词的长度的数量
    int x_axis = 0;         // x轴坐标，即单词长度的值
    int done = 0;           // 判断是否读完文件


    // 初始化数组默认值
    for (x_axis = 0; x_axis <= MAXWORDLEN; x_axis++)
    {
        lengtharr[x_axis] = 0;
    }

    while (done == 0)
    {
        c = getchar();

        if (c == ' ' || c == '\t' || c == '\n' || c == EOF)
        {
            if (spaces == 0)
            {
                spaces = 1;

                if (wordlen <= MAXWORDLEN)
                {
                    if (wordlen > 0)
                    {
                        thisval = ++lengtharr[wordlen - 1];
                    }
                }
                else
                {
                    thisval = ++lengtharr[MAXWORDLEN];
                }
                // 不停更新数量的最大值
                if (thisval > maxval)
                    {
                        maxval = thisval;
                    }
            }

            if (c == EOF)
            {
                done = 1;
            }
        }
        else
        {
            if (spaces == 1)
            {
                wordlen = 0;
                spaces = 0;
            }
            ++wordlen;
        }
    }

    // 图形打印
    // 通过thisval这个过程量与lengtharr[x_axis]比较，判断是否打印“*”
    for (thisval = maxval; thisval > 0; thisval--)
    {
        printf(" %4d| ", thisval);
        for (x_axis = 0; x_axis <= MAXWORDLEN; x_axis++)
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
    for (x_axis = 0; x_axis <= MAXWORDLEN; x_axis++)
    {
        printf("---");
    }
    printf("\n      ");
    for (x_axis = 0; x_axis < MAXWORDLEN; x_axis++)
    {
        printf("%2d ", x_axis + 1);
    }
    printf(">%d\n", MAXWORDLEN);


    return 0;
}
