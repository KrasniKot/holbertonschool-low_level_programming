#include "main.h"

/**
 * string_toupper - turn lowercase into uppercase.
 * @s: array.
 * Return: 0.
 */
char *string_toupper(char *s)
{
	while (*s++)
	{
		if (*s >= 97 && *s <= 122)
		{
			*s -= 32;
		}
	}
}

