#include "main.h"

/**
 * leet - Encodes a sting into 1337.
 * @s: array.
 * Return: s.
 */
char *leet(char *s)
{
	int i, n;
	char k[] = {97, 101, 111, 116, 108};
	char h[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i]; i++)
	{
		for (n = 0; h[n]; n++)
		{
			if (s[i] == k[n] || s[i] == k[n - 32])
			{
				s[i] = h[n];
			}
		}
	}
	return (s);
}
