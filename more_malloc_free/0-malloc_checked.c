#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: amount of memory being allocated.
 * Return: a pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (!a)
		exit(98);

	return (a);
}
