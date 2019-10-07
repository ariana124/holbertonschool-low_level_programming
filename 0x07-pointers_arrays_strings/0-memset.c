#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to fill memory area
 * @n: number of bytes to be filled
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
