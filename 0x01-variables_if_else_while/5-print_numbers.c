#include <stdio.h>
/**
 * main - prints number 0-9
 * Return: always 0
 */
int main(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
