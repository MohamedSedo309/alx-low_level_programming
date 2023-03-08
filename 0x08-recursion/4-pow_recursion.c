#include "main.h"
/**
 * _pow_recursion - raise x to power y
 * @x: base number
 * @y: power number
 * Return: base x to power y
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
if (y > 0)
{
int res;
res = x * _pow_recursion(x , y - 1);
return (res);
}
}
