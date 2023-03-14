#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array.
 * @width: array width.
 * @height: array height.
 * Return: @a.
 */
int **alloc_grid(int width, int height)
{
	int **a, i;

	if (width < 0 || height < 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		a[i] = malloc(sizeof(int) * width);
	
	if (!a)
		return (NULL);

	return (a);
}
