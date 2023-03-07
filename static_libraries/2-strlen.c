#include "main.h"

/**
 * _strlen - meassure the lenght of s.
 * @s: function variable.
 * Return: x (lenght).
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s)
	{
		s++;
		x++;
	}

	return (x);
}

