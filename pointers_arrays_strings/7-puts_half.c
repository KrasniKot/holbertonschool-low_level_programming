#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: function variable.
 */
void puts_half(char *str)
{
	int i = 0, k = 0;

	while (str[k])
	{
		k++;
	}
	for (i = k / 2; i < k - 1; i++)
	{
		if (k % 2 != 0)
		{
			i += 1;
			k += 1;
		}

		_putchar (str[i]);
	}
	_putchar (10);
}
