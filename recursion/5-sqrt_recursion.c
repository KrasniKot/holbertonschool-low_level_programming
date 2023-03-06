#include "main.h"

/**
 * finder - looks for the root square.
 * @x: possible root.
 * @n: @x^2.
 * Return: x, or -1 if @n doesen´t have natural square root.
 */
int finder(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (finder(x + 1, n));
}
/**
 * _sqrt_recursion - starts the searching for the square root square of @n.
 * @n: function variable.
 * Return: Root square of @n.
 */
int _sqrt_recursion(int n)
{
	return (finder(1, n));
}
