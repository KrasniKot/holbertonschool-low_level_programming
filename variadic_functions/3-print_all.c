#include "variadic_functions.h"

/**
 * print_chr - prints a char.
 * @l: char.
 */
void print_chr(va_list l)
{
	printf("%c", va_arg(l, int));
}
/**
 * print_int - prints an int.
 * @l: int.
 */
void print_int(va_list l)
{
	printf("%d", va_arg(l, int));
}
/**
 * print_flt - prints a float.
 * @l: float.
 */
void print_flt(va_list l)
{
	printf("%.f", va_arg(l, double));
}

/**
 * print_str - prints a string.
 * @l: string.
 */
void print_str(va_list l)
{
	printf("%s", va_arg(l, char *));
}

/**
 * print_all - call the concerned function.
 * @format:  list of types of arguments.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;

	va_list (l);
	char *separator = "";

	va_start(l, format);

	typp pfs[] = {
		{"c", print_chr},
		{"i", print_int},
		{"f", print_flt},
		{"s", print_str},
		{NULL, NULL}
	};

	while (format[i] && format)
	{
		while (pfs[j].a)
		{
			if (*pfs[j].a == format[i])
			{
				printf("%s", separator);
				pfs[j].fs(l);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar (10);
	va_end(l);

}