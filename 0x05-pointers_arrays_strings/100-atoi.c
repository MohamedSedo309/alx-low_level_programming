#include "main.h"
/**
 * get_string_lenth - returns the length of a string
 * @s: string
 * Return: length
 */
int get_string_lenth(char *s){
    int i = 0;
    while (s[i] != '\0'){
        i++;
    }
    return (i);
}

/**
 * is_positive - determine if integer is negative
 * @s: integer
 * Return: integer 1 or 0
 */

int is_positive(char *s){
    int len = get_string_lenth(s);
    int h;
    int n =0;
    for (h = 0; h < len; h++){
    if (48 <= s[h] && s[h] <= 57){
      break ;
    }
    if (s[h] == 45){
        n++;
    }
    }
    if (n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */
 
int _atoi(char *s){
int len = get_string_lenth(s);
int h;
char n[10];
int m = 0;
int num = 0;
int r =0;
int positive = is_positive(s);
for (h = 0; h < len; h++){
    if (48 <= s[h] && s[h] <= 57){
        n[m] = s[h];
        m++;
    }else if (m > 0 && (48 < s[h] || s[h] > 57)){
        break ;
    }
}

for ( r = 0; n[r] != '\0'; ++r) {
    num = num*10 + n[r] - '0'; 
}
if (positive == 0){
    return (num * -1);

}
if (s == '0'){
    return 0;
}
return num;
}
