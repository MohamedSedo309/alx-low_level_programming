#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function on an array
 * via a function ptr
 * @array: array of int
 * @size: size of array
 * @action: pointer to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 1;
if (array != NULL && action != NULL)
{
while (i <= size)
{
action(array[i]);
i++;
}
}
}
