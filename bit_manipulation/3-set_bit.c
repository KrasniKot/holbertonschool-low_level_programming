#include "main.h"

/**
 * set_bit - set 1 at the @index bit.
 * @n: number.
 * @index: index.
 * Return: -1 if it fails, 1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
