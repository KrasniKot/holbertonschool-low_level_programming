#include "main.h"

/**
 * print_rev - prints a reverse string.
 * @s: function variable.
 */
void print_rev(char *s)
{
	while (s != '\0')
	{
		_putchar (*(s--));
	}
	_putchar (10);
}
