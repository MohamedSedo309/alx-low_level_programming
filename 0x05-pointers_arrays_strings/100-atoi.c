#include "main.h"

/**
 * get_string_lenth - returns the length of a string
 * @s: string
 * Return: length
 */
int get_string_lenth(char *s){
    int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * start_num - find index where a digit is first found in string
 * @s: string to search
 * Return: integer index where digit is first found
 */

int start_num(char *s)
{
	int i;

	for (i = 0; i < get_string_lenth(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1); /* return -1 if no digits found */
}

/**
 * is_positive - determine if integer is negative
 * @s: integer
 * Return: integer 1 or 0
 */

int is_positive(char *s){
    int negatives = 0;
    int i = 0;
    int sign = 1;

	while (i < (start_num(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}

	if (negatives % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */
 
int _atoi(char *s){
int start = (start_num(s));
	int sign;
	int digits_to_print = 0;
	int t = 1;
	int i;
	unsigned int num = 0;
	int digit = (start_num(s));

	if (start < 0) {
		return (0);
}
	sign = is_positive(s);

while ((s[start] >= '0' && s[start] <= '9')
	       && (start <= get_string_lenth(s))) 
	{
		digits_to_print += 1;
		start++;
	}
//824
	i = 1;
	while (i < digits_to_print) 
	{
		t *= 10;
		i++;
	}
//11
	for (i = digit; i < (digit + digits_to_print); i++) 
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);

}

