#include "variadic_functions.h"

/**
 * print_strings - prints strings given as arguments.
 * @separator: separator.
 * @n: number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	char *k;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		k = va_arg(l, char *);
		if (!k)
			printf("(nil)");
		else
			printf("%s", k);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	putchar(10);
}
