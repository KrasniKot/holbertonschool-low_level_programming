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
		if (haystack[k] == needle[0])
		{
			for (h = 0; haystack[k] == needle[h]; k++, h++)
			{
			}
			if (needle[h] == 0)
			{
				return (haystack + k - h);
			}
		}
	}
	return ('\0');
}
