#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calls function get_op_func.
 * @argc: number of arguments given.
 * @argv: array of arguments given.
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
