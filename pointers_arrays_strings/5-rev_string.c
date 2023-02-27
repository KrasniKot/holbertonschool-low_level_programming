#include "main.h"

/**
 * rev_string - prints a reverse string.
 * @s: function variable.
 */
void rev_string(char *s)
{
	int k = 0;

	while (s[k])
	{
		k++;
	}

	k -= 1;

	while (k >= 0)
	{
		_putchar (s[k]);
		k--;
	}

	_putchar (10);
}
