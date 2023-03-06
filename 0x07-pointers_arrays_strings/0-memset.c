#include "main.h"
/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: value
 * @n: number of bytes
 * Return: memory area (S)
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (i <= n)
{
*(s + i) = b;
i++;
}
return (s);
}
