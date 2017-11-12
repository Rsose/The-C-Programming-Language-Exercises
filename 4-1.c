/* Exercise 4-1
 * Write the function strindex(s,t) 
 * which returns the position of the rightmost occurrence of t in s, 
 * or -1 if there is none.
 */
 
#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]);

int main()
{
  	printf("strindex(\"asdfsshitasdfshitasa\", \"shit\") -> %d\n", strindex("asdfsshitasdfshitasa", "shit"));

  	return 0;
}

int strindex(char s[], char t[])
{
  	int len_s = strlen(s);
	int len_t = strlen(t);
	
	int i, j, k;

  	for (i = len_s - len_t - 1; i >= 0; i--) 
	{
    	for (j = 0, k = i; t[j] != '\0' && t[j] == s[k]; j++, k++)
      		;
    	if (j > 0 && t[j] == '\0') 
		{
      		return i;
    	}
  	}

  	return -1;
}
