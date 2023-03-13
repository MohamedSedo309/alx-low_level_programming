#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of char and init memory first
 * @size: size of array
 * @c: array char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
char* t;
t = malloc(sizeof(char) * size);
while (i < size)
{
t[i] = c;
i++;
}
t[i] = '\0';
return (t);
}
