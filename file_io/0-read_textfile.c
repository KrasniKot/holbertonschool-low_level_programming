#include "main.h"

/**
 * read_textfile - prints a file to the POSIX standard output.
 * @filename: file name.
 * @letters: number of bytes to be printed.
 * Return: 0 if it fails, number of printed bytes otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ofle = open(filename, O_RDONLY);
	ssize_t rifle;
	char *buff = malloc(sizeof(char) * letters + 1);

	rifle = read(ofle, buff, letters);

	if (rifle == -1 || ofle == -1 || !buff || !filename)
		return (0);

	rifle = write(STDOUT_FILENO, buff, rifle);

	if (rifle == -1)
		free(buff);
		return (0);

	free(buff);
	close(ofle);
	return (rifle);
}
