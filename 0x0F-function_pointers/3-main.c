#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*p)(int, int);

	p = get_op_func(argv[2]); /* stores function into a pointer */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", p(a, b));
	return (0);
}
