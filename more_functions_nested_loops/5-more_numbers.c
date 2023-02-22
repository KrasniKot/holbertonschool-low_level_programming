#include "main.h"

/**
 * more_numbers - prints 14 times from 0 to 9.
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				_putchar (i + '0');
			}
			else
			{
				_putchar (i / 10 + '0');
				_putchar (i % 10 + '0');
			}
		}
		return (j);
	}
}
