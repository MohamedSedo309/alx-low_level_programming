#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c: digit to be checked
 * Return: 1 if true, 0 if false
 */

bool _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (i < argc)
{
if (_isdigit(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);
return (0);
}
