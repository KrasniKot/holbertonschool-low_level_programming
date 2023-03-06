#include "main.h"

/**
 * _pow_recursion - raises @x to the power of @y.
 * @x: base number.
 * @y: exponent.
 * Return: result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y < 1)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
