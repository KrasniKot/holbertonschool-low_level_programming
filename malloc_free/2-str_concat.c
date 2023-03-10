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

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[k])
		k++;
	while (s2[h])
		h++;

	i = k;
	a = malloc(sizeof(char) * (h + k + 1));

	if (!a)
		return (NULL);

	for (; k >= 0; k--)
		a[k] = s1[k];
	for (; h >= 0; h--)
		a[i + h] = s2[h];

	return (a);
}
