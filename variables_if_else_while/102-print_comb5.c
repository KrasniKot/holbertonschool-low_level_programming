#include <stdio.h>

/**
 * prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					putchar (a + '0');
					putchar (b + '0');
					putchar (' ');
					putchar (c + '0');
					putchar (d + '0');
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar (10);

	return (0);
}
