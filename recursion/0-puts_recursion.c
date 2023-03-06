#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s: array.
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar (10);
		return;
	}

	_putchar (*s);
	s++;
	_puts_recursion(s);
}
