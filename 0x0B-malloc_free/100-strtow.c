#include "holberton.h"
#include <stdlib.h>

/**
 * countword - function that counts words in a string
 * @s: character string to be counted through
 * Return: number of words in string
 */
int countword(char *s)
{
	int i;
	int count;

	for (i = 0; s[i]; i++)
		if (s[i] != ' ')
			count++;
	for (; s[i] && s[i] != ' '; i++)
		;
	return (count);
}


/**
 * strtow - function that splits a string into words
 * @str: string that contains words
 * Return: words from the string
 */
char **strtow(char *str)
{
	int i, j, w, count;
	int wordnum = 0;
	char **ar;

	if (str == NULL)
		return (NULL);
	if (str[0] == '\0')
		return (NULL);

	count = countword(str);

	ar = malloc((count + 1) * sizeof(char *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] && str[i] != ' '; j++)
				;
			ar[wordnum] = malloc((j - i + 1) * sizeof(char));

				if (ar[wordnum] == NULL)
					return (NULL);
				for (w = 0; str[i] && str[i] != ' '; i++, w++)
					ar[wordnum][w] = str[i];

				ar[wordnum][w] = '\0';
				wordnum++;
		}
	}
	return (ar);
}
