#include "main.h"
#include <stdlib.h>

 char *_strdup(char *str)
{
	int k = 0;
	char *c;

	if (!str)
		return (NULL);

	while (str[k])
		k++;

	k -= 1;

	for (c = malloc(sizeof(char) * k); k >= 0; k--)
		c[k] = str[k];

	return (c);
}
