#include "main.h"

/**
 * _strlen_recursion - measure the lenght of a string.
 * @s: array.
 * Return: lenght.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!*s)
	{
		return (i - 1);
	}

	i++;
	_strlen_recursion(s + 1);
}
