#include <stdio.h>
/**
 * main - prints alphabet from a to z, with c incrementing by 1
 * Return: the lowercase alphabet
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
