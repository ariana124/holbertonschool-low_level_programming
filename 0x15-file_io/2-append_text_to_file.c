#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add to the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, count, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = open(filename, O_APPEND);
	if (file == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
		;

	w = write(file, text_content, count);
	if (w == -1)
		return (-1);

	close(file);

	return (1);
}
