#include <stdio.h>

/**
 * main - prints all possible combinations of any single digits.
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i;
	int nl = 10;

	for (i = 0; i != 10; i++)
	{
		putchar (i + '0');
		if (i == 9)
		{
			continue;
		}
		putchar (',');
		putchar (' ');
	}
	putchar (nl);

	return (0);
}
