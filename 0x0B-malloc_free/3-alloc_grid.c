#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocate memory for a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array of zeros
 */

int **alloc_grid(int width, int height)
{
int h = height;
int w = width;
int i;
int j;
int **arr;
if (w <= 0 || h <= 0)
{
return (NULL);
}
**arr = (int **)malloc(sizeof(int *) * h);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < h; i++)
{
arr[i] = (int *)malloc(w * sizeof(int));
if (arr[i] == NULL)
{
for (i = 0; i < h; i++)
{
free(arr[i]);
free(arr);
}
return (NULL);
}
for (j = 0; j < w; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
