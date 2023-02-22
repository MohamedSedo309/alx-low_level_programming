#include <stdio.h>
/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
int n = 0;
long a = 0;
long b = 1;
long sum = 0;
for (n = 0; n < 50; n++)
{
sum = a + b;
a = b;
b = sum;
printf("%ld", sum);
if (n < 49)
{
printf(", ");
}
}
return (0);
}
