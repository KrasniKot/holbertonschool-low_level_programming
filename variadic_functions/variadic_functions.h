#ifndef variadic
#define variadic

#include <stdarg.h>
#include <stdio.h>

typedef struct fc
{
	char *a;
	void (*fs)(va_list l);
} typp;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
