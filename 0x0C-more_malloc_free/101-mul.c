#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * create_xarray - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 *              function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';
	array[index] = '\0';
	return (array);
}
/**
 * iterate_zeroes - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}
