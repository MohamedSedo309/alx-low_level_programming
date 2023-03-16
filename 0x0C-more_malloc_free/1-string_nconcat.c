#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate s1 and n bytes of s2
 * @s1: string 1
 * @s2: string 2 for n char(s)
 * @n: n bytes to concat from string 2
 * Return:  return ptr to new string
 */
 
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *t;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i = 0;
unsigned int j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (*(s1 + i))
{
len1++, i++;
}
while (*(s2 + j))
{
len2++, j++;
}
len2++;
if (len2 <= n)
{
t = malloc(sizeof(char) * (len1 + len2));
}
if (len2 > n)
{
len2 = n;
t = malloc(sizeof(char) * (len1 + len2));
}
if (t == NULL)
{
return (NULL);
}
i = 0, j = 0;
while (i < len1)
{
*(t + i) = *(s1 + i);
i++;
}
while (j < len2)
{
*(t + i) = *(s2 + j);
i++, j++;
}
return (t);
}
