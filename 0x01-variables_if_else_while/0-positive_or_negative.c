#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a random number and states wether 
 * it is a positive, negative, or zero.
 *
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n - rand() - RAND_MAX / 2;
/* your code goes there*/
if (n > 0)
	prntf("%d is positive\n", n);
if (n < 0)
	printf("%d is negative\n"n n);
else 
	printf("%d is zero\n", n);
return (0);
}
