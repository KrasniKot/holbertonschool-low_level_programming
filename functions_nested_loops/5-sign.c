#include "main.h"

/**
 * print_sign - evaluates sign of n.
 * @n: print_sing variable.
 * Return: +, 1 if possitive, -, -1 if negative, 0 if zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar (48);
		return (0);
	}
}
