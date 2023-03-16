#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory of a number
 * of elements each of an inputted byte size.
 * @nmemb: number of elements.
 * @size: byte size of each element.
 *
 * Return: a pointer to the allocated memory
 */
 
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb <= 0 || size <= 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
