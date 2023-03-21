#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: array.
 * @size: array size.
 * @cmp: function pointer to compare.
 * Return: the first index (1), -1 if fails.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	for (r = 0; r < size && array && cmp; r++)
	{
		if (cmp(array[r]))
			return (r);
	}

	return (-1);
}

