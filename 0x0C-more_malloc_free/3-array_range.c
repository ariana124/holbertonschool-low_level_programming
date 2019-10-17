#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int range, i;
	int *array;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	array = malloc(range * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		array[i] = min + i;

	return (array);
}
