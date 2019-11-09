#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: the index starting from 0 of the bit we return
 * Return: 1 for success or -1 for an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}
