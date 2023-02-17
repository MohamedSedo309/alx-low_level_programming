#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
