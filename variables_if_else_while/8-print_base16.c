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

	for (c = 48; c < 103; c++)
	{
		if (c < 58 && c > 96)
			putchar (c);
	}

	putchar (nl);

	return (0);

}
