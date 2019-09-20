#include <stdio.h>
/**
 * main - prints number 00-99
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar('0' + i / 10);
		putchar('0' + i % 10);
		if (!(i == 99))
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
