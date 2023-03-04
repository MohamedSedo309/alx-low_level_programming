#include "main.h"
/**
 * print_number - print an integer as char
 * @n: int number
 */
void print_number(int n)
{
unsigned int tens;
unsigned int digit;
unsigned int number = n;
double zeros = 1;
if (n == 0)
{
_putchar('0');
}
else
{
if (n < 0)
{
number = n * -1;
_putchar('-');
}
while (zeros <= number)
{
zeros *= 10;
}
tens = zeros / 10;
while (tens >= 1)
{
digit = number / tens;
_putchar(digit + '0');
number = (number - (tens * digit));
tens /= 10;
}
}
}
