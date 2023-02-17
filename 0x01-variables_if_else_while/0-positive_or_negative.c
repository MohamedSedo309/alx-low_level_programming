#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*I hate this too old coding */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0){
	  printf("%d is positive", n);
	}if(n<0){
	  printf("%d is negative", n);
	}else{
	  printf("%d is zero", n);
	}
	return (0);
}
