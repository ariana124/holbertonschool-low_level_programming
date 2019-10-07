#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string 1
 * @accept: string 2
 * Return: byte or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			break;
	}
	return (s + i);
}
