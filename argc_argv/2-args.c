#include <stdio.h>

/**
 * main - prints its arguments.
 * @argc: number of arguments.
 * @argv: array.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
