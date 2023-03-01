#include "main.h"
/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
int tmp;
int i = 0;
n = n - 1;
while (i < n)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
i++;
n--;
}
}
