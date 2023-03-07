#include <stdio.h>

/**
 * main - prints @argc.
 * @argc: amount of given arguments.
 * @argv: array.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
