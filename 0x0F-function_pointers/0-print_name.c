#include <stdlib.h>

/**
 * print_name - print name with pointer function
 * @name: parameter to be printed
 * @f:function (char *)
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
