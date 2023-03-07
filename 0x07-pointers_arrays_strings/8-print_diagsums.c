#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: array
 * @size: array size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
long sum1 = 0;
long sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 = sum1 + a[i][i];
}
for (i = (size - 1); i >= 0; i--)
{
sum2 = sum2 + a[i][i];
}
printf("%ld, %ld", sum1, sum2);
}
