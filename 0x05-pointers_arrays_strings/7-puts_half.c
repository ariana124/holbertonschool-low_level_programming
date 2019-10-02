#include "holberton.h"

/**
 * puts_half - prints second half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a > 4)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
