#include "main.h"

/**
 * _strncpy - copies n bytes from src to dest.
 * @dest: destination.
 * @src: source.
 * @n: limit.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	
	return (dest);
}

