#include "main.h"

/**
 * _isupper - checks for uppecase characters.
 * @c: function variable.
 * Return: 1 if uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
