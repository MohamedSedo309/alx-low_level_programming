#include "main.h"
/**
 * print_binary - get binary value for
 * unsigned int
 * @n: unsigned int
 * Return: void - print binary
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) ? '1' : '0');
}
