#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 */
void more_numbers(void)
{
int i;
int c = 0;
while (c <= 10)
{
for(i = 0; i < 15; i++)
{
if(i < 10)
putchar(i + '0');
else
{
putchar('1');
putchar(i - 10 + '0');
}
}
putchar('\n');
c++;
}
}
