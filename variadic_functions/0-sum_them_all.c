#include "variadic_functions.h"

/**
 * sum_them_all -adds all given arguments.
 * @n: number of arguments.
 * Return: 0 if !n, addition of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	va_list l;
	unsigned int i;

	va_start(l, n);

	if (!n)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		s += va_arg(l, int);
	}

	va_end(l);
	return (s);
}
