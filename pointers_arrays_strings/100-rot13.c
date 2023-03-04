#include "main.h"

/**
 * rot13 - encodes a text using rot13.
 * @s: array to encode.
 * Return: @s.
 */
char *rot13(char *s)
{
	char k[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char h[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; k[n]; n++)
		{
			if (s[i] == k[n])
			{
				s[i] = h[n];
				break;
			}
		}
	}
	return (s);
}
