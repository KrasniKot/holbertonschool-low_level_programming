#include "main.h"

/**
 * _strlen - meassure the lenght of s.
 * @s: function variable.
 * Return: x (lenght).
 */
int _strlen(char *s)
{
	int x;

	while (*s++)
	{
		x++;
	}

	return (x);
}

