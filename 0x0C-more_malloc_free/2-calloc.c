#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: bytes in each element
 * Return: allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc((nmemb * size) * sizeof(int));

	if (array == NULL)
		return (NULL);

	return (array);
}
