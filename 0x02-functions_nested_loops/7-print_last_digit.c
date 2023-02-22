#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer
 * Return: last digit of number
 */
int print_last_digit(int n)
{
if (n < 0)
n *= -1;
int l = n % 10;
_putchar((n % 10) + '0');
return (l);
}
