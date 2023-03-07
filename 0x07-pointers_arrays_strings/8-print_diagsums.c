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
int j;
long sum1 = 0;
long sum2 = 0;
for (i = 0; i < size; i++)
{
j = (i * size) + i;
sum1 += a[j];
}
for (i = 1; i <= size; i++)
{
j = (i * size) - i;
sum2 += a[j];
}
printf("%ld, %ld\n", sum1, sum2);
}
