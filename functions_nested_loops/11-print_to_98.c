#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from given number to 98.
 * @n: print_to_98 variable.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (n = n; n < 98; n++)
		{
			printf("%i, ", n);
		}
		printf("98");
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%i, ", n);
		}
		printf("98");
	}
	putchar (10);
}
