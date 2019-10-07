#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int c, r;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
