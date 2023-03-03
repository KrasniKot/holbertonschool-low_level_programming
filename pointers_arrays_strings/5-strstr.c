#include "main.h"

/**
 * _strstr - locates @needle in array 1.
 * @haystack: array 1.
 * @needle: array 2.
 * Return: @haystack + k or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int k, h;

	for (k = 0; haystack[k]; k++)
	{
		for (h = 0; needle[h]; h++)
		{
			if (haystack[k] == needle[h] && haystack[k + 1] == needle[h + 1])
			{
				if (haystack[k] != 0 && needle[h] != 0)
				{
					return (haystack + k);
				}
			}
		}
	}
	return ('\0');
}
