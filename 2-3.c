/*
 * Write a function htoi(s) , which converts a string of hexadecimal digits
 * (including an optional 0x or 0X ) into its equivalent integer value. The allowable digits are 0
 * through 9 , a through f , and A through F .
 * */

#include <stdio.h>
#include <string.h>

int htoi(char s[]);

int main()
{
    char cc[10];
    int c;
    int num;

    for (int i = 0; (c = getchar()) != '\n'; i++)
    {
        cc[i] = c;
    }

    num = htoi(cc);
    if (num != 0)
    {
        printf("%d\n", num);
    }

    return 0;
}

int htoi(char s[])
{
    int result = 0;
    int c;

    if ( strlen(s) > 2)
    {
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        {
            for (int i = 2; (c = s[i]) != '\0'; i++)
            {
                int tmp;
                if ('0' <= c && c <= '9')
                {
                    tmp = c - '0';
                }
                else if ('a' <= c && c <= 'f')
                {
                    tmp = c -'a' + 10;
                }
                else if ('A' <= c && c <= 'F')
                {
                    tmp = c - 'A' + 10;
                }
                else
                {
                    printf("invalid hexadecimal!!!");
                    return 0;
                }
                result = result * 16 + tmp;
            }
            return result;
        }
        else
        {
            printf("stupid boy");
            return 0;
        }
    }
    else
    {
        printf("Are you kidding me ?");
        return 0;
    }

}
