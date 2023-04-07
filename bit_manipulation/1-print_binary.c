#include "main.h"

/**
 * print_binary - prints a base 10 number in base 2.
 * @n: number.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + 48);
}
