#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 97; i < 123; i++)
		{
			putchar (i);
		}
		putchar (10);
	}
}
