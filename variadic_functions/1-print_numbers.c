#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers given as arguments.
 * @separator: separator.
 * @n: number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	putchar (10);
	va_end(l);
}
