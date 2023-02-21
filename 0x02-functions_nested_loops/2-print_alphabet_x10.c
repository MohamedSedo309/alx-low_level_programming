#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
  int i;
  char c;
for (i = 0; i <= 9; i++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
