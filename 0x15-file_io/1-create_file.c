#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: is a NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, count, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
		;

	w = write(file, text_content, count);
	if (w == -1)
		return (-1);

	return (1);
}
