#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: array 1.
 * @s2: array 2.
 * @n: number of bytes to concatenate.
 * Return: a pointer to concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int k = 0, h = 0, i = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[k])
		k++;
	while (s2[h] && h <= n)
		h++;

	c = malloc(sizeof(char) * (k + h));

	if (!c)
	{
		free(c);
		return (NULL);
	}

	for (; i <= k; i++)
		c[i] = s1[i];
	i = 0;
	for (; i <= h; i++)
		c[k + i] = s2[i];

	return (c);
}
