#include "main.h"
/**
 * print_square - print a square of given size
 * @size: size to draw
 */
void print_square(int size)
{
int i;
int j;
for (j = 0; j < size; j++)
{
if (j > 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
_putchar('#');
}
}
}
