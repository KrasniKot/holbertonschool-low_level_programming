#include "main.h"

/**
 * print_most_numbers - prints all numbres but 2 and 4.
 *
 * Returns: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i);
		}

	}
	_putchar (10);
}
