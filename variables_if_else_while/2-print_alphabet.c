#include <stdio.h>

/**
 * main - print lowercase alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int nl = 8;

	for (c = 97; c <= 122; c++)
	{
		putchar (c);
	}
	putchar (nl);

	return (0);
}
