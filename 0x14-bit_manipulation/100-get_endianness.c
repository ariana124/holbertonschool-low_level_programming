#include "holberton.h"

/**
 * get endianness - function to check if machine architecture is little endian
 * or big endian
 * Return: void
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return ((int)*c);
}
