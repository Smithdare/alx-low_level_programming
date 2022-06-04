#include <stdio.h>

/*
 * main - main block 
 * Description: putchar to print alphabet in lower case
 * Return: Always 0.
 */
int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');

		return (0);
}
