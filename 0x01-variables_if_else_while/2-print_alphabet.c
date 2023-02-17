#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print letters from a to z
 *
 * Description: print the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char x;
  for (x = 'a'; x <= 'z'; x++;)
    {
      putchar (x);
    }
  putchar('\n');
}
