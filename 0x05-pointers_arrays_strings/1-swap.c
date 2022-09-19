#include "main.h"

/**
 * swap_int -a function swaps the values of two integers
 * @a: pointer to first value
 * pointer to second value
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
