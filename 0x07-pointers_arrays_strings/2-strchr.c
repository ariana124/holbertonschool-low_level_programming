#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: character string
 * @c: character to be found
 * Return: character or null if character not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
