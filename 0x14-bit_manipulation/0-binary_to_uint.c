#include "main.h"

/**
 * binary_to_uint - convert binary number
 * to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int len = 0;
int i;
if (b == NULL)
{
return (0);
}
while (b[i] != '\0')
{
len++;
}
i = 0;
while (b[i])
{
if ((b[i] != '0') && (b[i] != '1'))
{
return (0);
}
if (b[i] == '1')
{
result += (1 * (1 << len));
}
i++;
len--;
}
return (result);
}
