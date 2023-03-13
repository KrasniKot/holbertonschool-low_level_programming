#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it.
 * @size: amount of bytes.
 * @c: byte.
 * Return: @p.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *)malloc(size);

	p[0] = c;

	if (!size)
		return ('\0');

	p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
