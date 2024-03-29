#include "main.h"

/**
 * create_file - creates a file.
 * @filename: file name.
 * @text_content: text content.
 * Return: -1 if it fails, 1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	int wfile, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[i])
		i++;

	wfile = write(file, text_content, i);

	if (wfile == -1)
		return (-1);

	close(file);
	return (1);
}
