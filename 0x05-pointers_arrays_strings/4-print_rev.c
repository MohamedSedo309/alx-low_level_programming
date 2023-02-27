#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */
void print_rev(char *s)
{
int i = 0;
int n;
while (s[i] != '\0')
{
i++;
}
for (n = (i - 1); n >= 0; n--)
{
_putchar(s[n]);
i++;
}
_putchar('\n');
}
