#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a base 2 number to a base 10.
 * @b: array.
 * Return: 0 if it fails, converted number otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, m = 1;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		n += (b[i] - 48) * m;
		m *= 2;
	}
	return (n);
}
