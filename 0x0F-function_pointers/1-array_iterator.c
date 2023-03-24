#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - print array of int in pointer function
 * @name: parameter to be printed
 * @size: size of array
 * @action:function (int)
 *
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
