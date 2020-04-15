#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the linear search algorithm
 * @array: pointer to the first element in the array
 * @size: the number of the elements in the array
 * @value: the value to search for
 *
 * Return: the first index where the value is located otherwise returns -1 if
 * the value is not in the array or if the array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size <= 0)
		return (-1);

	for (index = 0; array && index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       index, array[index]);

		if (array[index] == value)
			return (index);
	}

	return (-1);
}
