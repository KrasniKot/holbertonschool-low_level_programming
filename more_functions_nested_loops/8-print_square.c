#include "main.h"

/**
 * print_square - prints a square.
 * @size: function variable.
 * Return: 0.
 */
void print_square(int size)
{
	int y, x;

	if (size <= 0)
		_putchar (10);
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar ('#');
			}
			_putchar (10);
		}
	}
}
