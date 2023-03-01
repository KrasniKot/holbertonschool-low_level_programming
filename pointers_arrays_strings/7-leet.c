#include "main.h"

char *leet(char *s)
{
	int i, n;
	char k[]= {97, 101, 111, 116, 108};
	char h[]= {52, 51, 48, 55, 49};

	for (i = 0; s[i]; i++)
	{
		for (n = 0; h[n]; n++)
		{
			if (s[i] == k[n])
			{
				s[i] = h[n];
			}
		}
	}
}
