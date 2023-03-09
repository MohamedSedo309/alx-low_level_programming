#include "main.h"
/**
 * compare - compare start and end of a string
 * @head: start of string
 * @tail: end of string
 * Return: 1 if matches, 0 if not
 */

int compare(char *start, char *end)
{
if (start >= end)
{
return (1);
}
if (*start == *end)
{
return (compare(start + 1, end - 1));
}
return (0);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
int len = _strlen(s);
return (compare(s, (s + len - 1)));
}
