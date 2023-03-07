#include "main.h"
#define NULL 0
/**
 * _strstr - find and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer for whole match
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
int x;
if (needle[0] == '\0')
{
return (haystack);
}
while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
{
x = i;
while (needle[j] != '\0')
{
if (haystack[x] == needle[j])
{
x++;
j++;
}
else
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
i++;
}
return (NULL);
}
