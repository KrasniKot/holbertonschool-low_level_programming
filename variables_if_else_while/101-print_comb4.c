#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = i + 2; k < 10; k++)
			{
				if (j != k && k > j)
				{
					putchar (i + '0');
					putchar (j + '0');
					putchar (k + '0');
				}

				if (i == 7 && j == 8 && k == 9)
				{
					break;
				}
				if (j != k && k > j)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar (10);

	return (0);
}
