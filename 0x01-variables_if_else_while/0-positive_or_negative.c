#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * betty style doc for function main goes there
 * this generates random number 
 * and returns 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	printf("%d is zero\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is positive\n", n);
return (0);
}
