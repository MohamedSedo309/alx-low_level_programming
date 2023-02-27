#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */
void print_rev(char *str)
{
int i = 0;
int n;
while (str[i] != '\0')
{
i++;
}
for (n = i; n >= 0; n--)
{
_putchar(str[n]);
i++;
}
_putchar('\n');
}
