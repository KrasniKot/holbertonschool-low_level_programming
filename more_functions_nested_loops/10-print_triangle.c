#include "main.h"

/**
 * print_triangle - prints triangle.
 * @size: function variable.
 * Return: 0.
 */
void print_triangle(int size)
{
	int y, x, p;

	if (size <= 0)
		_putchar (10);
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = size - 1; x < y; x++)
			{
				_putchar (' ');
			}
			for (p = 0; p <= y; x++)
			{
				_putchar ('#');
			}

			_putchar (10);
		}
	}
}
