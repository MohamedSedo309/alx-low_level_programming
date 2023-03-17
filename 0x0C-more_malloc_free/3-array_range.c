#include <stdlib.h>
#include "main.h"
/**
* array_range - create an array of integers
* @min: min number in the array
* @max: max value in the array
*
* Return: pointer to the array
*/
int *array_range(int min, int max)
{
int n = (max - min) + 1;
int i;
int *p;
if (min > max)
{
return (NULL);
}
p = malloc(sizeof(int) * n);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < n; i++)
{
p[i] = min + i;
}
return (p);
}
