#include "holberton.h"

/**
 * read_textfile - function that reads a file and prints it to the POSIX
 * standard output
 * @filename: file to read and print
 * @letters: the number of letters it should read and print
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	count = read(fd, buffer, letters);

	write(1, buffer, letters); /* 1 is for standard output */

	close(fd);

	free(buffer);

	return (count);
}
