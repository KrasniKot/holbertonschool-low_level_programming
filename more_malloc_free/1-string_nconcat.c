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
	char *a;
	unsigned int i = 0, k = 0, h = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[k])
		k++;
	while (s2[h] && h < n)
		h++;

	a = malloc(sizeof(char) * (k + h + 1));

	if (!a)
		return (NULL);

	for (; i <= k; i++)
		a[i] = s1[i];
	for (i = 0; i < h; i++)
		a[i + k] = s2[i];

	a[k + h] = '\0';

	return (a);
}
