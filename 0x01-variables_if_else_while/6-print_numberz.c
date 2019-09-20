#include <stdio.h>
/**
 * main - prints number 0-9
 * Return: always 0
 */
int main(void)
{
	int c;

	c = 0;

	while ('0' + c <= '9')
	{
		putchar('0' + c);
		c++;
	}

	putchar('\n');
	return (0);
}
