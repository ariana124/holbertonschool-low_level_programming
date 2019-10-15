#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to newly allocated memory space
 */
char *_strdup(char *str)
{
	int i, len;
	char *new;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	new = malloc((len + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		new[i] = str[i];
	}
		new[i] = '\0';
	return (new);
}


#include "holberton.h"

/**
 * _strlen - gives length of a string
 * @s: string
 * Return: returns length of string
 */
		int _strlen(char *s)
		{
			int l;

			l = 0;

			while (s[l])
				l++;
			return (l);
		}
