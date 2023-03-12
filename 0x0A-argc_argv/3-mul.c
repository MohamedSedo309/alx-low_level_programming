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
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return (0);
}
