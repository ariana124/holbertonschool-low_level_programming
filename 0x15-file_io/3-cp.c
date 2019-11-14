#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: 0 for success, anything else for error
 */
int main(int argc, char *argv[])
{
	int f1, f2, rc, wc, c1, c2;
	char buffer[1024];

	if (argc != 3)
		error("Usage: cp file_from file_to", "", 97);

	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
		error("Error: Can't read from file", argv[1], 98);

	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
		error("Error: Can't write to", argv[2], 99);

	do {
		rc = read(f1, buffer, 1024);
		if (rc == -1)
			error("Error: Can't read from file", argv[1], 98);
		wc = write(f2, buffer, rc);
		if (wc == -1 || wc != rc)
			error("Error: Can't write to", argv[2], 99);
	} while (rc == 1024);

	c1 = close(f1);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1);
		exit(100);
	}

	c2 = close(f2);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2);
		exit(100);
	}

	return (0);
}


/**
 * error - function to print error message and exit status
 * @msg: message to be printed
 * @file: file name
 * @status: exit status
 * Return: void
 */
void error(char *msg, char *file, int status)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);

	exit(status);
}
