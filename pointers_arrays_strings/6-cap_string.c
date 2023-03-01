#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: array.
 * Return: s (capitalized).
 */
char *cap_string(char *s)
{
	int n = 0;

	while (s[n])
	{
		while (!(s[n] >= 97 && s[n] <= 122))
		{
			n++;;
		}
		if (s[n - 1] == 32 || s[n - 1] == 9 || s[n - 1] == 10 || s[n - 1] == ','
				|| s[n - 1] == 59 || s[n - 1] == 46 || s[n - 1] == 33
				|| s[n - 1] == 63 || s[n - 1] == 22 || s[n - 1] == 40
				|| s[n - 1] == 41 || s[n - 1] == 123 || s[n - 1] == 125)
		{
			s[n] -= 32;
		}
		n++;
	}
	return (s);
}
