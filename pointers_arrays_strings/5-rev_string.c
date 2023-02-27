#include "main.h"

/**
 * rev_string - prints a reverse string.
 * @s: function variable.
 */
void rev_string(char *s)
{
	int k = 0;
	int n = 0;

	while (s[k])
	{
		k++;
	}
	
	char l[k];

	k -= 1;

	while (k >= 0)
	{
		l[n] = (s[k]);
		n++;
		k--;
	}

	_putchar (10);
}
