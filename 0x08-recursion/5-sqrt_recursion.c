#include "main.h"
/**
 * get_root - get square root of n
 * @n: n
 * @r: posible root
 * Return: natural square root, or -1 if not natural root
 */

int get_root(int n, int r)
{
if (r * r > n)
{
return (-1);
}
if (r * r == n)
{
return (r);
}
return (get_root(n, r + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (find_root(n, 0));
}
