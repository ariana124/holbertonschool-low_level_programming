#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @a: any integer
 * Return: 0 for success
 */
int _abs(int a)
{
	if (a < 0)
		a = -a;
	else
		return (0);
}
