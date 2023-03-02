#include "main.h"

/**
 *  _strchr - finds character @c in a string.
 *  @s: array.
 *  @c: character to be found.
 *  Return: a pointer to the first occurrence or NULL if is not in.
 */
char *_strchr(char *s, char c)
{
	char *n = '\0';
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			n = &s[i];
			break;
		}
	}
	return (n);
}
