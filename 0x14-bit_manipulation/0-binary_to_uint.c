#include "holberton.h"

/**
 * binary_to_uint - converts a binary number into an unsigned int
 * @b: pointer to the string of 0 & 1 chars
 * Return: the converted number or 0 if there is 1 or more chars in the
 * string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i, count = 1;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++) /* loop to find the length of string */
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = i - 1; i >= 0; i--) /* find index of array & loop backwards */
	{
		if (b[i] == '1')
			decimal = decimal + count;
		count = count * 2;
	}
	return (decimal);
}
