#include "main.h"

/**
 * more_numbers - prints 14 times from 0 to 9.
 *
 * Return: 0.
 */
int more_numbers(void)
{
	int i, j, n;
	int n = 10;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar (i / 10 + '0');
				_putchar (i % 10 + '0');
			}
			else 
			{
				_putchar (i + '0');
			}
		}
		return (n);
	}
}
