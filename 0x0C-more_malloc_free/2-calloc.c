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
unsigned int i;
if (nmemb <= 0 || size <= 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr != NULL)
{
for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;
return (ptr);
}
else
{
return (NULL);
}
}
