#include "main.h"
/**
 * is_prime - check if prime number or not
 * @n: number to check
 * @divisor: divisor
 * Return: 1 if prime or 0 if not
 */

int is_prime(int n, int divisor)
{
if (n == divisor)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
int divisor = 3;
if (n % 2 == 0 || n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (is_prime(n, divisor));
}
