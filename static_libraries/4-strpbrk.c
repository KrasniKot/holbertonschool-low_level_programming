#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: array 1.
 * @accept: array 2.
 * Return: s + k or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int k, h;

	for (k = 0; s[k]; k++)
	{
		for (h = 0; accept[h]; h++)
		{
			if (s[k] == accept[h])
			{
				return (s + k);
			}
		}
	}
	return ('\0');
}
