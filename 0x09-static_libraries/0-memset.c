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
int i;
int size = n;
if (size > 0)
{
for (i = 0; i < size; i++)
{
*(s + i) = b;
}
}
return (s);
}
