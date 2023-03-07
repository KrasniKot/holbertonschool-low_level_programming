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
	int j, k, i, a = 0;

	if (argc < 2)
	{
		putchar (48);
		putchar (10);
	}
	else
	{
		for (j = 0; argv[j]; j++)
		{
			for (k = 0; argv[j][k]; k++)
			{
				if (argv[j][k] < 48 || argv[j][k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}

		for (i = 0; i < argc; i++)
		{
			a += atoi(argv[i]);
		}
		printf("%i\n", a);
		return (0);
	}
}
