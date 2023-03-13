#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int k = 0;
char *t;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
*s2 = "";
}
while (*(s1 + i) != '\0')
{
i++;
}
while (*(s2 + j) != '\0')
{
j++;
}
t = malloc(sizeof(char) * (i + j + 1));
if (t == NULL)
{
return (NULL);
}
while (k < i)
{
s1[k] = t[k];
k++;
}
while (k <= j)
{
s2[k] = t[k];
k++;
}
return (t);
}
