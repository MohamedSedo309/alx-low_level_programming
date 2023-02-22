#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer
 * Return: last digit of number
 */
int print_last_digit(int n)
{
int l = n % 10;
_putchar((n % 10) + '0');
return (l);
}
