#include "main.h"

/**
 * _strncat - adds n bytes from src to dest.
 * @dest: destination.
 * @src: source.
 * @n: limit.
 *Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int h = 0, k = 0;

	while (dest[k])
	{
		k++;
	}
	while (src[h] && h < n)
	{
		dest[k++] = src[h++];
	}
	return (dest);
}
