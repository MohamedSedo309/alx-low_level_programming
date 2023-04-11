#include "main.h"

/**
 * get_endianness - checks the first byte stored
 * in memory then know if it is big or little endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int num = 0x12345678;
char *ptr = (char *)&num;
if (*ptr == 0x12)
{
return (0);
}
else
{
return (1);
}
}
