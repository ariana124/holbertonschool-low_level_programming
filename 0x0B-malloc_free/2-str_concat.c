#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	char *new;

	new = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		new[i] = s2[j];
		i++;
		new[i] = '\0';
	}

	return (new);
}


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
