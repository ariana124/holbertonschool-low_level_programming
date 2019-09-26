#include "holberton.h"

/**
 * print_line - prints straight line
 * Return: 0 for success
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar ('_');
			a++;
		}
		_putchar ('\n');
	}
	else if (n <= 0)
		_putchar ('\n');
}
