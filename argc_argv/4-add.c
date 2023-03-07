#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array.
 * Return: 0 (success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
	int j, k, a = 0;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k]; k++)
		{
			if (argv[j][k] < 48 || argv[j][k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		a += atoi(argv[j]);
	}

	printf("%i\n", a);
	return (0);
}
