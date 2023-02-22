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
if (m == 0)
{
_putchar('0');
if (n < 9 && x == 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
else if (m <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + m);
}
else if (m > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (m / 10));
_putchar('0' + (m % 10));
}
}
_putchar('\n');
}
}
