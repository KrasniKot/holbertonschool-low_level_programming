#include "main.h"

/**
 * _puts - prints a strin.
 * @str: function variable.
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar (10);
}
