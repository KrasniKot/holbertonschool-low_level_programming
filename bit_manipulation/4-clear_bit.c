#include "main.h"

/**
 * clear_bit - set to 0 the bit at @index.
 * @n: number.
 * @index: index.
 * Return: the return value of set_bit function.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
