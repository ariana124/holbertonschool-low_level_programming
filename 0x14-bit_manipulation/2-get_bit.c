#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index that starts at 0 from the bit we return
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > 32)
		return (-1);

	value = 1 << index;
	value = n & value;
	value = value >> index;

	return (value);

}
