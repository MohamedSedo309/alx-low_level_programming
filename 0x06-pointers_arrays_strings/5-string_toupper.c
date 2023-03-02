#include "main.h"
/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 * Return: string with capital lestters
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 97 + 65;
}
i++;
}
return (s);
}
