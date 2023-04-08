#include "main.h"

/**
 * clear_bit - set to 0 the bit at @index.
 * @n: number.
 * @index: index.
 * Return: the return value of set_bit function.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	return (set_bit(n, index));
}
