#include "main.h"
/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
int i;
int m;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (m = 1; m < i; m++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
