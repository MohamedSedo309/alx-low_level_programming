#include "main.h"
#define NULL 0
/**
 * _strchr - locate 1st occurrence of c in s and returns pointer
 * @s: string to search in
 * @c: characer to search for
 * Return: pointer to that character in s
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0' && s[i] != c)
{
i++;
}
if (s[i] == c)
{
return (&s[i]);
}
else
{
return (NULL);
}
}
