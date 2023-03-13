#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: array.
 * Return: NULL if @str == NULL, copy  of @str if not.
 */
char *_strdup(char *str)
{
	int k = 0;
	char *c;

	c = malloc(sizeof(char) * k);

	if (!str)
		return (NULL);

	while (str[k])
		k++;

	if (!c)
		return (NULL);

	for (; k >= 0; k--)
		c[k] = str[k];

	return (c);
}
