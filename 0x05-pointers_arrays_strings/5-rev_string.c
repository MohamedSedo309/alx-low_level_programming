#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
char tmp;
int i = 0;
int j;
int n = 0;
while (s[i] != '\0')
{
i++;
}
j = i - 1;
while (n < j)
{
tmp = s[n];
s[n] = s[j];
s[j] = tmp;
n++, j--;
}
}
