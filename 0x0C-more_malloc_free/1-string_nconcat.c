#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: postive integer
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		n = len2;

	new = malloc((len1 + n + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';
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
