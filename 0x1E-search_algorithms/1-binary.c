#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print array everytime array is halved
 * @array: array to search in
 * @l: left index of array
 * @r: right index of array
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - search mids
 * @array: given array
 * @size: size of array
 * @value: value to search for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
