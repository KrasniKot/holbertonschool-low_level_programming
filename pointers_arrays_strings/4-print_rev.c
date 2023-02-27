#include "main.h"

/**
 * print_rev - prints a reverse string.
 * @s: function variable.
 */
void print_rev(char *s)
{
	int k = 0;

	while (s[k])
	{
		k++;
	}

	k -= 1;

	while (k > 0)
	{
		_putchar (s[k]);
		k--;
	}

	_putchar (10);
}
