#include "main.h"
/**
 * times_table - print multiplication table
 */
void times_table(void)
{
int n, x, m;
for (x = 0; x <= 9; x++)
{
for (n = 0; n <= 9; n++)
{
   m = (x * n);
if (m > 9){
_putchar('0' + (m / 10));
_putchar('0' + (m % 10));
}
else
{
_putchar('0' + m);
}
if (n != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
