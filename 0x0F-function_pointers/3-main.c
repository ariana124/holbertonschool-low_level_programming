#include "calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char argv[])
{
	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if(argv[2] == '/' || argv[2] == '%' && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

}
