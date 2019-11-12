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
	ssize_t file, count, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	count = read(file, buffer, letters);
	if (count == -1)
		return (0);

	w = write(1, buffer, count); /* 1 is for standard output */
	if (w == -1)
		return (0);

	close(file);

	free(buffer);

	return (count);
}
