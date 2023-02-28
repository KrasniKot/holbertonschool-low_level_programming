#include "main.h"


char *_strcat(char *dest, char *src)
{
	int i, , h = 0, k = 0;

	while (dest[k])
	{
		k++;
	}
	
	while (src[h])
	{
		h++;
	}

	k -= 1

	for (i = k; i < h + k; i++)
	{
		dest[k] = src[i];
	}
}
