#include "search_algos.h"


/**
 * jump_search - a function that searches for a value in an array of integers
 * using the jump search algorithm
 * @array: the array to be searched
 * @size: the length of the array
 * @value: the value to be searched in the array
 *
 * Return: returns the index of the array found, if not found or the array is
 * empty it returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	int prev = 0;
	int step = (int)floor(sqrt(size));

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[findMin(step, size) - 1] < value)
	{
		prev = step;
		step += (int)floor(sqrt(size));

		if (array[prev] < value)
			printf("Value checked array[%d] = [%d]\n",
			       prev, array[prev]);
		if (prev >= (int)size)
			return (-1);
	}

	if (!(prev - (int)floor(sqrt(size)) <= 0))
		prev -= (int)floor(sqrt(size));

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += 1;
		if (prev == findMin(step, size))
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}


/**
 * findMin - function that finds the smaller of the two compared values
 * @a: value a
 * @b: value b
 *
 * Return: the minimum value
 */
int findMin(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}
