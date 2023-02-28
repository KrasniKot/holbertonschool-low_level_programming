#include "main.h"

/**
 * rev_string - prints a reverse string.
 * @s: function variable.
 */
void rev_string(char *s)
{
	int k, i = 0;
	char l;

	while (s[k])
	{
		k++;
	}

	k -= 1;

	for (i = k; i >= k / 2; i--)
	{
		l = s[i];
		s[i] = s[k - i];
		s[k - i] = l;
	}
	_putchar (10);
}
