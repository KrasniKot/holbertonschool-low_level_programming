#include "main.h"

/**
 * get_bit - gets the bit at @index.
 * @n: number.
 * @index: index.
 * Return: 0 if it fails, 1 otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (0);

	if ((n & (1 << index)) == 0)
		return (0);
	else
		return (1);
}
