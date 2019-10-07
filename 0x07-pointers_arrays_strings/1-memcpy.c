#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @src: memory area to be copied
 * @dest: destination memory area
 * @n: bytes to be copied
 * Return: copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
