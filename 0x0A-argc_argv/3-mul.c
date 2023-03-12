#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - print multiplication of 2 nums
 * @argc: arguments counter
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 if two arguments not given
 */
 
int main(int argc, char *argv[])
{
int i;
int x;
int y;
if (argc != 3)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x * y);
return (0);
}
