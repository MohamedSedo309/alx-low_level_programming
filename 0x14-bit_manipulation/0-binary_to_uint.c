#include "main.h"

/**
 * binary_to_uint - convert binary number
 * to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
int len = 0; 
int i;
unsigned int num = 0;
if (b == NULL)
{
return (num);
}
while (b[len] != '\0')
{
len++;
}
len -= 1;
i = 0;
while (b[i])
{
if ((b[i] != '0') && (b[i] != '1'))
{
return (num);
}
if (b[i] == '1')
{
num += (1 * (1 << len));
}
i++;
len--;
}
return (num);
}
