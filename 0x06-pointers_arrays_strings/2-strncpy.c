#include "main.h"
/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;
    
    for (i = 0; i < n; i++)
    {
    dest[i] = src[i];
    }
    dest[n] = '\0';
    
    return (dest);
}
