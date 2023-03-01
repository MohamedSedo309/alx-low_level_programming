#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */
 
int _atoi(char *s){
int res = 0; 
  int i;
    
    for ( i = 0; s[i] != '\0'; ++i) 
        res = res * 10 + s[i] - '0'; 
  
    return res; 
}
