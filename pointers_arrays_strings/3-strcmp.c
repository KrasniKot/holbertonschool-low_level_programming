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

	while(s2[n])
	{
		n++;
	}
	while (s1[k])
	{
		if (s1[k] != s2[k])
		{
			h += 1;
			break;
		}
		k++;
	}
	if (h != 0 && k > n)
	{
		return (1);
	}
	else if (h != 0 && k < n)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
