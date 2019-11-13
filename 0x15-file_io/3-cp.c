#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: 0 for success, anything else for error
 */
int main(int argc, char *argv[])
{
	int file;
	char buffer[1024];

	if (/*argc is not correct*/)
	{
		dprintf("Usage: cp file_from file_to\n", STDERR_FILENO);
		exit(97);
	}
	if (/*file_from doesn't exist or can't read it*/)
	{
		dprintf("Error: Can't read from file NAME_OF_THE_FILE\n",
			STDERR_FILENO);
		exit(98);
	}
	if (/*cannot create or write to file_to*/)
	{
		dprintf("Error: Can't write to NAME_OF_THE_FILE\n",
			STDERR_FILENO);
		exit(99);
	}
	if (/*cannot close file descriptor*/)
	{
		dprintf("Error: Can't close fd FD_VALUE\n", STDERR_FILENO);
		exit(100);
	}
}
