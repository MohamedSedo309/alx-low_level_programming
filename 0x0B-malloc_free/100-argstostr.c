#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++, s++;
}
return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
char *s;
int len = 0;
int i;
int j;
int k = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
len += _strlen(av[i]);
}
len += (ac + 1);
s = malloc(sizeof(char) * len);
if (s == NULL)
{
free(s);
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; j < _strlen(av[i]); j++)
{
s[k++] = av[i][j];
}
s[k++] = '\n';
}
return (s);
}
