#include "main.h"

/**
 * print_diagonal - prints diagonal.
 * @n: function variable.
 * Return: 0.
 */
void print_diagonal(int n)
{
	int y, l;

	for (y = 0; y < n; y++)
	{
		if (n <= 0)
		{
			_putchar (10);
		}
		for (l = 0; l <= y; l++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar (10);

		_putchar (10);
	}
}
