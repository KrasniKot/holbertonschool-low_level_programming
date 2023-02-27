#include "main.h"

/**
 * print_rev - prints a reverse string.
 * @s: function variable.
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s)
	{
		s++;
		i++;
	}

	for (j = 0; j < i; j++)
	{
		_putchar (s[i]);
		i--;
	}

	_putchar (10);
}
