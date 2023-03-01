#include "main.h"

/**
 * string_toupper - turn lowercase into uppercase.
 * @s: array.
 * Return: 0.
 */
char *string_toupper(char *s)
{
	int n = 0;

	while (s[n])
	{
		if (s[n] >= 97 && s[n] <= 122)
		{
			s[n] -= 32;
		}
		n++;
	}

	return (s);
}

