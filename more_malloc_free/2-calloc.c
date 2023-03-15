#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a = malloc(size * nmemb + 1);

	if (nmemb == 0 || !(*a))
		return (NULL);

	return (a);
}
