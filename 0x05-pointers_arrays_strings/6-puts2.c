#include "main.h"
/**
 * puts2 - prints every second character of a string
 * followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
int i = 0;
int n;
while (str[i] != '\0')
{
i++;
} 
for (n = 0; n < i; n = n + 2)
{
_putchar(str[n]);
}
_putchar('\n');
}
