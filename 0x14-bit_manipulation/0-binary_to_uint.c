#include "main.h"

/**
 * binary_to_uint - convert binary number
 * to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
int i;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
{
number = number << 1;
}
else if (b[i] == '1')
{
number = number << 1;
number = number | 1;
}
else
{
return (0);
}
}
return (number);
}
