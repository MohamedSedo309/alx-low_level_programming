#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a copy of the string str
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */
char *_strdup(char *str)
{
int i = 0;
int j = 0;
char *t;
if (str == NULL)
{
return (NULL);
}
while (*(str + i) != '\0')
{
i++;
}
t = malloc(sizeof(char) * (i + 1));
if (t == NULL)
{
return (NULL);
}
while (j <= i)
{
t[j] = str[j];
j++;
}
t[j] = '\0';
return (t);
}
