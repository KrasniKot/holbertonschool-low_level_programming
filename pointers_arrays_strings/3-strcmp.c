#include "main.h"

/**
 * _strcmp - compares to strings.
 * @s1: string 1
 * @s2: string 2.
 * Return: 0 if string 1 and 2 are the same, 1 if 1 is greater than 2, -1 if not.
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0, k = 0, h = 0;

	while (s1[k])
	{
		if (s1[k] != s2[k])
		{
			n++;
		}
		k++;
	}
	while (s2[h])
	{
		h++;
	}

	if (n == 0)
	{
		return (0);
	}
	else if (n != 0)
	{
		if (k > h)
		{
			return (13);
		}
		else
		{
			return (-13);
		}
	}
}
