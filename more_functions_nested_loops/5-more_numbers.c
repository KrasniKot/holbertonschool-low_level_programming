#include "main.h"

/**
 * more_numbers - prints 14 times from 0 to 9.
 *
 * Return: 0.
 */
int more_numbers(void)
{
	int i, j, k, l;
	

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
				for (k = 0; k < 2; k++)
				{
					if (k == 0)
					{
						l = i / 10;
					}
					else
					{
						l = i % 10;
					}
					_putchar (l + '0');
				}
			}

		}
		_putchar (10);
	}
}
