#include "main.h"
/**
 * cap_string - capitalize first letter of each word
 * @s: string
 * Return: reformed string
 */
char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122 && (s[i - 1] == ' ' || s[i - 1] == '.'))
{
s[i] = s[i] - 97 + 65;
}
i++;
}
return (s);
}