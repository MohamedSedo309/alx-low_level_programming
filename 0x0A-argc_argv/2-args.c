#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments in cmd
 * @argc: arguments counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char * argv[])
{
int i;
if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
