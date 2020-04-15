#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the binary search algorithm
 * @array: the pointer to the first element in the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index of the value is located otherwise it returns -1 if the
 * array is NULL or the value isn't found
 */
int binary_search(int *array, size_t size, int value)
{
	int lower = 0;
	int upper = (int)size - 1;

	if (array == NULL || size == 0)
		return (-1);

	return (binarySearch(array, lower, upper, value));
}


/**
 * binarySearch - searches for a value in a sorted array using the binary
 * search algorithm
 * @arr: pointer to the first element in the array
 * @left: the left subarray
 * @right: the right subarray
 * @value: the value to search for
 *
 * Return: the index of the value found or -1 if the value is not found
 */
int binarySearch(int *arr, int left, int right, int value)
{
	if (right >= left)
	{
		int mid = left + (right - left) / 2;

		print_array(arr, left, right);

		if (arr[mid] == value)
			return (mid);

		if (arr[mid] > value)
			return (binarySearch(arr, left, mid - 1, value));

		return (binarySearch(arr, mid + 1, right, value));
	}

	return (-1);
}


/**
 * print_array - function that prints an array
 * @arr: pointer to the first element in the array
 * @left: left subarray
 * @right: right subarray
 *
 * Return: void
 */
void print_array(int *arr, int left, int right)
{
	printf("Searching in array: ");

	for (; left < right; left++)
		printf("%d, ", arr[left]);

	printf("%d\n", arr[right]);
}
