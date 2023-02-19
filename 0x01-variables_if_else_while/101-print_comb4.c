#include <stdio.h>

/**
 *main - print 012 to 789 with no duplicate digits or combos
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;
        int hundreds; 
	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /*one's ten+1*/
		{
		  for (hundreds = ( ones + 1); hundreds <= '9'; hundreds++)
		    {
		        putchar(hundreds);
			putchar(tens);
			putchar(ones);

			if (hundreds != '7' || tens != '8' || ones != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		    }
		}
	}
	putchar('\n');
	return (0);
}
