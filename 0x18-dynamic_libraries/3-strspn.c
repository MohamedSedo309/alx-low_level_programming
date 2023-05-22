#include "main.h"
/**
 * _strspn - return length of string that matches values
 * @s: string to search
 * @accept: string to compare
 * Return: number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
int n = 0;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
if (accept[j + 1] == '\0' && s[i] != accept[j])
{
return (n);
}
}
i++;
}
return (n);
}
