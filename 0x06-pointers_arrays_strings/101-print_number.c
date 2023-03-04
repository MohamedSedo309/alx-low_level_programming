#include "main.h"
/**
 * print_number - print an integer as char
 * @n: int number
 */

void print_number(int n)
{
unsigned int tens;
unsigned int digit;
unsigned int positive_n = n;
double d_num = 1;
if (n == 0)
{
_putchar('0');
}
else
{
if (n < 0)
{
positive_n = n * -1;
_putchar('-');
}
while (d_num <= positive_n){
d_num *= 10;
}
tens = d_num / 10;
while (tens >= 1)
{
digit = positive_n / tens;
_putchar(digit + '0');
positive_n = (positive_n - (tens * digit));
tens /= 10;
}
}
}
