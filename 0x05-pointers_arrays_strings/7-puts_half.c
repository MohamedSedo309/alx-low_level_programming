#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
int i = 0;
int n;
int k;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
i = i - 1;
k = i / 2;
k = k + 1;
}
else
{
k = i / 2;
}
for (n = k ; n <= i; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
