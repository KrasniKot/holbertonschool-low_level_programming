#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: array.
 * Return: s (capitalized).
 */
char *cap_string(char *s)
{
	int n, h;

	for (n = 0; s[n]; n++)
	{
		if (s[n] == 32 || s[n] == 9 || s[n] == 10 || s[n] == ',' 
				|| s[n] == 59 || s[n] == 46 || s[n] == 33
				|| s[n] == 63 || s[n] == 22 || s[n] == 40
				|| s[n] == 41 || s[n] == 123 || s[n] == 125)
		{
			n++;
			if (s[n] >= 97 && s[n] <= 122)
			{
				s[n] -= 32;
			}
		}
	}
	return (s);
}
