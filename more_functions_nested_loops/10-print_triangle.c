#include "main.h"

/**
 * print_triangle - prints triangle.
 * @size: function variable.
 * Return: 0.
 */
void print_triangle(int size)
{
	int y, x, p;
	int s = 1;
	int t = size;

	if (size <= 0)
		_putchar (10);
	else
	{
		for (y = 0; y <= size; y++)
		{
			for (p = 1; p < t; p++)
			{
				_putchar (' ');
			}

			for (x = 1; x < s; x++)
			{
				_putchar ('#');
			}
			_putchar (10);
			s++;
			t--;
		}
	}
}
