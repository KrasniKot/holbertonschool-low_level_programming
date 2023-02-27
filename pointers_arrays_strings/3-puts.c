#include "main.h"

void _puts(char *str)
{
	int i;

	while (*str)
	{
		_putchar (str[i]);
		i++;
	}
}
