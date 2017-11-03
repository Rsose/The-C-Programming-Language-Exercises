#include <stdio.h>
#include <string.h>

#define SIZE 0xff

void squeeze(char s1[], char s2[]);

int main()
{
    char s1[] = "abcdefghigk";
    char s2[] = "aaabbdd";
    squeeze(s1, s2);
    printf("%s\n", s1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    char symbol[SIZE] = {};
    int i, j;

    for (i = 0; s2[i] != '\0'; ++i)
    {
        symbol[s2[i]] = 1;
    }

    i = j = 0;

    while (s1[i] != '\0')
    {
        while (symbol[s1[i]])
        {
            i++;
        }
        s1[j++] = s1[i++];
    }

    s1[j] = '\0';
}
