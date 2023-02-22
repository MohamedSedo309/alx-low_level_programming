#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */
int main()
{
long sum_E = 0;
long a = 0;
long b = 1;
long sum = 0;
while (b < 4000000)
{
sum = a + b;
a = b;
b = sum;
if ((sum % 2 == 0) && (sum <= 4000000))
{
sum_E = sum_E + sum;
}
}
printf("%ld", sum_E);
return (0);
}
