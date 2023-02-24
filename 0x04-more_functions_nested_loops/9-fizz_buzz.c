#include <stdio.h>
/*
 *main - writes numbers frm 1 to 100 with fizz buzz 
 */
int main()
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 3 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
putchar(' ');
}
return 0;
}
