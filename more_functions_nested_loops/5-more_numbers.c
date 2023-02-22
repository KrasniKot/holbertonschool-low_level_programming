#include "main.h"

/**
 * more_numbers - prints 14 times from 0 to 9.
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 14; j++)
	{
		for (i = 48; i < 59; i++)
		{
			_putchar (i);
		}
		_putchar (10);
	}
}
