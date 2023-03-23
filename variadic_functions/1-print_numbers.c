#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		printf("%s", separator);
	}
	putchar (10);
	va_end(l);
}
