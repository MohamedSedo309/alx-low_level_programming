#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;
	int tens_2;
	int ones_2;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
		 	for (tens_2 = tens; tens_2 <= '9'; tens_2++) /*print second of pair*/
			{
				for (ones_2 = ones + 1; ones_2 <= '9'; ones_2++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(tens_2);
					putchar(ones_2);

					if (!((tens == '9' && ones == '8') &&
					      (tens_2 == '9' && ones_2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				ones_2 = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
