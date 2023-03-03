#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring.
 * @s: array 1.
 * @accept: array 2.
 * Return: k.
 */
unsigned int _strspn(char *s, char *accept)
{
	int k, i;

	for (k = 0; s[k]; k++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[k] == accept[i])
			{
				break;
			}
		}
		if (accept[i] == '\0')
		{
			break;
		}
	}
	return (k);
}
