#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: array 1.
 * @s2: array 2.
 * Return: a.
 */
char *str_concat(char *s1, char *s2)
{
	int k = 0, h = 0, i = 0;
	char *a;

	while (s1[k])
		k++;
	while (s2[h])
		h++;

	if (!s1 || !s2)
		return (NULL);

	i = k;
	a = malloc(sizeof(char) * (h + k + 1));

	for (; k >= 0; k--)
		a[k] = s1[k];
	for (; h >= 0; h--)
		a[i + h] = s2[h];

	return (a);
}
