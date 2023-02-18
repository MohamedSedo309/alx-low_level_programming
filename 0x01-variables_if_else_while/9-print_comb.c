#include <stdio.h>
/*
- main if for printing 0 - 9
*/

int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar (x);
putchar (',');
putchar (' ');
}
return (0);
}
