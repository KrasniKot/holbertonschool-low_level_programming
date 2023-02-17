#include "main.h"

/**
 * _islower - checks if "c" is lowercase.
 *
 * Return: 1 if lowercase, 0 if uppercase.
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
