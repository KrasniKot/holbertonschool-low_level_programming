#include "main.h"

/**
 * print_rev - prints a reverse string.
 * @s: function variable.
 */
void print_rev(char *s)
{
	int j, k;

	while (s[k])
	{
		k++;
	}

	while (k > 0)
	{
		_putchar (s[k]);
		k--;
	}

	_putchar (10);
}
