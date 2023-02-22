#include "main.h"

/**
 * print_line - prints a straight line.
 * @n: function variable.
 * Return: 0.
 */
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (n <= 0)
		{
			_putchar (10);
		}
		else
		{
			_putchar ('_');
		}

	}
}
