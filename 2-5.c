/*
 * Write the function any(s1,s2) , which returns the first location in a string s1
 * where any character from the string s2 occurs, or -1 if s1 contains no characters from s2 .
 * (The standard library function strpbrk does the same job but returns a pointer to the
 * location.)
 * */

#include <stdio.h>


int indexof(char s[], char c);


int main()
{
    char s1[] = "asdfbien";
    char s2[] = "viasnfasf";
    printf("%d\n", indexof(s1, s2[3]));
    return 0;
}


int indexof(char s[], char c)
{
    int i = 0;
    char cc;
    while ((cc = s[i++]) != '\0')
    {
        if (cc == c)
        {
            return --i;
        }
    }
    return -1;

}
