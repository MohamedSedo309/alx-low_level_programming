#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: pointer to memory address or exit 98
 */

void *malloc_checked(unsigned int b)
{
char *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
