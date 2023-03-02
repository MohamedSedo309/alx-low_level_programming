#include "main.h"
/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 65 && s[i] <= 90)
{
if ((s[i] + 13) <= 90)
{
s[i] = s[i] + 13;
}
else
{
s[i] = s[i] - 13;
}
}
else if (s[i] >= 97 && s[i] <= 122)
{
if ((s[i] + 13) <= 122)
{
s[i] = s[i] + 13;
}else
{
s[i] = s[i] - 13;
}
}
i++;
}
return (s);
}
