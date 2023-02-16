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

	for (c = 122; c > 96; c--)
	{
		putchar (c);
	}
	putchar (nl);

	return (0);
}
