#include "main.h"

/**
 * factorial - calculates the factorial of @n.
 * @n: function variable.
 * Return: @n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
