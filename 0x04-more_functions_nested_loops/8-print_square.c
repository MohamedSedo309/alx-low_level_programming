#include "main.h"
/**
 * print_square - print a square of given size
 * @size: size to draw
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
	{
for (j = 1; j <= size; j++)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
