#include "main.h"
/**
 * main - returns the length of a string
 * @s: string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0') {
i++;
}
return i;
}
