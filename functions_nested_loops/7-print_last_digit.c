#include "main.h"

/**
 * print_last_digit - find last a digit.
 * @a: print_last_digit variable.
 * Return: last digit.
 */
int print_last_digit(int a)
{
	int x = a % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
