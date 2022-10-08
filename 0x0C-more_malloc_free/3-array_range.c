#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an arrray of integers
 * ordered from min to max, inclusive.
 * @min: the first value of the array.
 * @max: the last value of the array.
 *
 * Return: NULL if min > max or the function fails.
 * otherwise, a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * sixe);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
