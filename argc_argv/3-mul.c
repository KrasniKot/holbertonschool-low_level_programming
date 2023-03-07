#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two argument number.
 * @argc: number of arguments.
 * @argv: array.
 * Return: 1 if Error.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
