#include "main.h"

/**
 * flip_bits - returns the number of bits needed to to flip get @n to @m.
 * @n: number.
 * @m: number.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nc = n ^ m;
	int i = 0;

	while (nc > 0)
	{
		i += nc & 1;
		nc >>= 1;
	}

	return (i);
}
