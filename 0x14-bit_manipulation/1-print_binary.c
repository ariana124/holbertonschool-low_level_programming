#include "holberton.h"

/**
 * print_binary - converts a number to binary
 * @n: number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int binary;

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
			_putchar('0');
	}
}
