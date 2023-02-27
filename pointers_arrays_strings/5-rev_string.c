#include "main.h"

/**
 * rev_string - prints a reverse string.
 * @s: function variable.
 */
void rev_string(char *s)
{
	int k, n, y = 0;
	int e;

	while (s[k])
	{
		k++;
	}

	char m[k];

	for (e = 0; e < k; e++)
	{
		m[e] = s[k - y];
		y++;
	}

	k -= 1;

	while (n <= k)
	{
		s[n] = m[n];
		n++;
	}

	_putchar (10);
}
