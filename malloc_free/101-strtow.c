#include "main.h"
#include <stdlib.h>

char **strtow(char *str)
{
	int k = 0, i;
	char **a;

	while (str[k])
	{
		k++;
	}

	a = malloc(sizeof(char) * k + 1);
	*a = malloc(sizeof(char) * k + 1);

	for (i = 0; i <= k; i++)
	{
		a[0][i] = str[i];
	}
	return (a);
}
