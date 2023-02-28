#include "main.h"

/**
 * _strcmp - compares to strings.
 * @s1: string 1
 * @s2: string 2.
 * Return: 0 if string 1 and 2 are the same, 1 if not.
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0, h = 0;

	while (s1[k])
	{
		if (s1[k] != s2[k])
		{
			h += 1;
			break;
		}
		k++;
	}
	if (h != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
