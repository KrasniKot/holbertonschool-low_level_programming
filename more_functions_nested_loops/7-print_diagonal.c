#include "main.h"

/**
 * print_diagonal - prints diagonal.
 * @n: function variable.
 * Return: 0.
 */
void print_diagonal(int n)
{
	int k, l;

	for (k = 0; k > n; k++)
	{
		if (n <= 0)
		{
			_putchar (10);
		}
		else
		{
			_putchar (92);
			for (l = 0; l <= n; l++)
			{
				_putchar (' ');
			}
		}
		_putchar (10);
	}
}
