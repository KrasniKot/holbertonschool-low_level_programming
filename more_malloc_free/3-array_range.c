#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum.
 * @max: maximum.
 * Return: a pointer to the newly allocated array.
 */
int *array_range(int min, int max)
{
	int i, *a;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));

	if (!a)
		return (NULL);

	for (i = 0; min <= max; min++)
		a[i++] = min;

	return (a);
}
