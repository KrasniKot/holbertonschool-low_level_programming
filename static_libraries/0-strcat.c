#include "main.h"

/**
 * _strcat - adds src to dest.
 * @dest: destination.
 * @src: source.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int h = 0, k = 0;

	while (dest[k])
	{
		k++;
	}
	while (src[h])
	{
		dest[k++] = src[h++];
	}
	return (dest);

}
