#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
int i = 0;
int n;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
i++;
}
for (n = i / 2 ; n < i; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
