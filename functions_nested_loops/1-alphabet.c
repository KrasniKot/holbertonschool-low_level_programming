#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
		_putchar(c);

	_putchar('\n');

}
