#include <stdio.h>
/**
 * main - prints alphabet from a to z, without q and e
 * Return: the lowercase alphabet
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (!(c == 'q' || c == 'e'))
			putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
