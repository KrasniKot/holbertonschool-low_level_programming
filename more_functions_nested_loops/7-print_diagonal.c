#include "main.h"

/**
 * print_diagonal - prints diagonal.
 * @n: function variable.
 * Return: 0.
 */
void print_diagonal(int n)
{
	int y, l;

	if (n <= 0)
		_putchar (10);
	else
	{
		for (y = 0; y < n; y++)
		{
			for (l = 0; l < y; l++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar (10);
		}
	}
}
