#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: function variable.
 */
void puts_half(char *str)
{
	int i = 0, k = 0, x = 0;

	while (str[k])
	{
		k++;
	}

	if (k % 2 != 0)
	{
		x = k / 2 + 1;
	}

	else
	{
		x = k / 2;
	}

	for (i = x; i < k; i++)
	{
		_putchar (str[i]);
	}
	_putchar (10);
}
