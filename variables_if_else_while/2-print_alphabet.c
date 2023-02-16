#include <stdio.h>

/**
 * main - print lowercase alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int nl = 10;

	for (c = 97; c < 123; c++)
	{
		putchar (c);
	}
	putchar (nl);

	return (0);
}
