#include "main.h"
#include <stdio.h>

/**
 * lenght - calculates the lenght of a string.
 * @s: array.
 * Return: lenght.
 */
int lenght(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + lenght(s + 1));
}

/**
 * palindrome - test if @s is a palindrome.
 * @i: start of the array.
 * @e: end of the array.
 * @s: array.
 * Return: 1 if @s is palindrome, 0 if not.
 */
int palindrome(int i, int e, char *s)
{
	if (s[i] != s[e - i])
	{
		return (0);

	}
	else if (i == e / 2)
	{
		return (1);
	}
	return (palindrome(i + 1, e, s));

}

/**
 * is_palindrome - calls to function palindrome givin it the end of the array.
 * @s: array.
 * Return: calls to palindrome.
 */
int is_palindrome(char *s)
{
	return (palindrome(1, lenght(s) - 1, s));
}
