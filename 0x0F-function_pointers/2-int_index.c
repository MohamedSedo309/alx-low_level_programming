#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - using fun ptr to excute cmp fun
 * @array: array to itrate
 * @size: size of array
 * @cmp: ptr to function that we need to execute
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int z;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
z = cmp(*(array + i));
if (z == 1)
{
return (i);
}
