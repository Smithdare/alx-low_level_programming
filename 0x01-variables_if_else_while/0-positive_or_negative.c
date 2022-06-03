#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a random number and states wether
 * it is positive , negative, or zero.
 *
 *Return: Always 0 (Success)
 */ 
 
  init main(void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;
	if (n<0)
	printf("%d is positive\n", n);
	else if (< )
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
}
