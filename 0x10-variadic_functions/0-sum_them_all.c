#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum of arguments
 * @n: number of integers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int sum = 0, i = 0;
if (n == 0)
{
return (0);
}
va_start(valist, n);
while (i <= n)
{
sum += va_arg(valist, int);
i++;
}
sum += va_arg(valist, int);
va_end(valist);
return (sum);
}
