#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */
void print_alphabet(void)
{
  char c;
  for (c = 'a';c <= 'z';c++)
    {
      putchar(c);
    }
  putchar('\n');
}
