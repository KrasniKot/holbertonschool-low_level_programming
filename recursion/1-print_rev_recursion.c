#include "main.h"

/**
 * _print-rev_recursion - prints a string in reverse.
 * @s: array.
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar (*s);
}
