#include "main.h"

/**
 * _puts - prints a strin.
 * @str: function variable.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*(str++));
	}
	_putchar (10);
}
