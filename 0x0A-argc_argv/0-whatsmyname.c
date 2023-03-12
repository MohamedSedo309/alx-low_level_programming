#include <stdio.h>
#include "main.h"
/**
 * main - print name of program
 * @argc: arguments numbers
 * @argv: array of string of arguments
 * Return: 0 on success
 */

int main(int argc , char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
