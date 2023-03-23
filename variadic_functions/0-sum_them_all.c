#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	va_list l;
	unsigned int i;

	va_start(l, n);

	for(i = 0; i < n; i++)
	{
		s += va_arg(l, int);
	}

	va_end(l);
	return (s);
}
