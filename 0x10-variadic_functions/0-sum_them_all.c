#include "variadic_functions.h"

/**
 * sum_them_all - function that adds all of its parameters
 * @n: first parameter
 * Return: the sum of all parameters or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, unsigned int);

	va_end(ap);

	return (sum);
}
