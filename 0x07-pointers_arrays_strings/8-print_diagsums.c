#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of diagonals of a square matrix of integers
 * @a: array of integers
 * @size: the square matrices
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
	}
	for (j = 0; j < size; j++)
	{
		sum2 += a[(size * j) + size - (j + 1)];
	}
			printf("%i, %i\n", sum1, sum2);
}
