#include "main.h"
#define NULL 0
/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: string to compare
 * Return: first occurence of string
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
s = &s[i];
return (s);
}
j++;
}
i++;
}
return (NULL);
}
