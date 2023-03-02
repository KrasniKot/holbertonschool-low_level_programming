#include "main.h"

/**
 * _memset - fills memory with @b.
 * @s: array.
 * @b: byte to be filled with.
 * @n: number of first bytes to fill.
 * Return: @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, *s++)
	{
		*s = b;
	}

	return (s);
}
