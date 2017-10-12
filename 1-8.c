/*
 * 编写一个统计空格，制表符与换行符个数的程序
 */
#include <stdio.h>

int main()
{
    int blanks, tabs, newlines;
    int current_char,last_char;
    int flag;   // 判断文件是否读完

    flag = 1;
    blanks = 0;
    tabs = 0;
    newlines = 0;

    while(flag)
    {
        current_char = getchar();

        if (current_char == ' ')
            ++blanks;

        if (current_char == '\t')
            ++tabs;

        if (current_char == '\n')
            ++newlines;
        /*
         * 判断最后一个字符是否为换行符
         * */
        if (current_char == EOF)
        {
            if (last_char != '\n')
            {
                ++newlines;
            }
            flag = 0;
        }
        last_char = current_char;
    }

    last_char = current_char;
    if (last_char != '\n')
        ++newlines;

    printf("Blanks: %d\nTabs: %d\nLines:%d\n", blanks, tabs, newlines);

    return 0;
}
