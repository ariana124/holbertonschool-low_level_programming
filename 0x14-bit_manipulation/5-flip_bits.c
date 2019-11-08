#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits needed to flip to get
 * from one number to another
 * @n: number
 * @m: other number
 * Return: the number of bit flips needed to get n equal to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, value = m ^ n;
	unsigned int count = 0;

	for (mask = 1; mask != 0; mask <<= 1)
	{
		if (value & mask)
			count++;
	}
	return (count);
}
