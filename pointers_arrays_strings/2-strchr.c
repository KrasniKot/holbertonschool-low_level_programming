#include "main.h"

/**
 *  _strchr - finds character @c in a string.
 *  @s: array.
 *  @c: character to be found.
 *  Return: a pointer to the first occurrence or NULL if is not in.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
