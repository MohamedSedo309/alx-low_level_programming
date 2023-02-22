#include <stdio.h>
/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */
int main()
{
int n = 0;
int a = 0;
int b = 1;
int sum = 0;
for (n = 0; n <= 50; n++)
{
sum = a + b;
a = b;
b = sum;
printf("%d" , sum);
if (n < 50){
printf(", ");
}
}
return 0;
}
