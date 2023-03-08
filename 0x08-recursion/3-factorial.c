#include "main.h"
/**
 * factorial - get factorial of n
 * @n: int number
 * Return: factorial of n
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n -1));
}
