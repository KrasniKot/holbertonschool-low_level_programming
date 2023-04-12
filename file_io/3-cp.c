#include "main.h"

/**
 * close_f - closes files.
 * @fd: file.
 */
void close_f(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents from @argv[1] into @argv[2].
 * @argc: number of arguments given.
 * @argv: arguments given.
 */
void main(int argc, char *argv[])
{
	int ofle_from = open(argv[1], O_RDONLY);
	int ofle_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	int rifle;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (ofle_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while ((rifle = read(ofle_from, buff, 1024)) > 0)
		if ((write(ofle_to, buff, rifle)) < 0 || ofle_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}


	close_f(ofle_from);
	close_f(ofle_to);
}
