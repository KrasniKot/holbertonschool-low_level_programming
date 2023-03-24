#include "variadic_functions.h"

void print_chr(va_list(l))
{
	printf("%c", va_arg(l, int));
}
void print_int(va_list(l))
{
	printf("%d", va_arg(l, int));
}
void print_flt(va_list(l))
{
	printf("%f", va_arg(l, double));
}
void print_str(va_list(l))
{
	printf("%s", va_arg(l, char *));
}

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list l;

	va_start (l, format);

	typp pfs[] =
	{
		{"c", print_chr},
		{"i", print_int},
		{"f", print_flt},
		{"s", print_str},
		{NULL, NULL}
	};

	while (pfs[i].a)
	{
		if(*pfs[i].a = format[i])
		{
			pfs[i].fs(l);
		}
		i++;
	}
	putchar (10);

}
