#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array;
 * @nmemb: amount of elements.
 * @size: size of elements.
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (!nmemb || !size)
		return (NULL);

	a = malloc(size * nmemb);

	if (!a)
		return (NULL);

	for (i = 0; i <= nmemb; i++)
		a[i] = 0;

	return (a);
}
