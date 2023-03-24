#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function prints the opcodes of its
 * own main function
 * in hexadecimal format
 * @argc: The number of arguments
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, 1 if argc != 2, 2 if negative
 */
int main(int argc, char *argv[])
{
int i;
if (argc != 2)
{
printf("Error\n");
return (1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
unsigned char *ptr = (unsigned char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", *(ptr + i));
}
printf("\n");
return (0);
}
