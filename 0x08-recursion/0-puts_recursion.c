#include "main.h"
/**
 * _puts_recursion - print string with new line
 * @s: string
 */
void _puts_recursion(char *s)
{
if (s[0] != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
_putchar('\n');
}
