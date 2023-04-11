#include "main.h"

/**
 * append_text_to_file - appends text to file.
 * @filename: filename.
 * @text_content: text content.
 * Return: -1 if it fails, 1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_WRONLY | O_APPEND);
	int i = 0, wfile;

	if (!filename || file == -1)
		return (-1);

	while (text_content && text_content[i])
		i++;

	wfile = write(file, text_content, i);

	if (wfile == -1)
		return (-1);

	close(file);
	return (1);
}
