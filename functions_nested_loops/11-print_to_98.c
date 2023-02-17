#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from given number to 98.
 * @n: print_to_98 variable.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n == 98; n++)
		{
			printf("%i, ", n);
		}
	}
	else
	{
		for (n = n; n == 98; n--)
		{
			printf("%i, ", n);
		}

	}
	putchar (10);
}
