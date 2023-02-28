#include "main.h"

/**
 * _strcpy - copies src's content into dest.
 * @dest: destination.
 * @src: source.
 * Return: *dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, k = 0;

	while (src[k])
	{
		k++;
	}

	for (i = 0; i <= k; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
