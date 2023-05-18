#include "search_algos.h"

/**
 * linear_search - looks for a value in an array.
 * @array: array to travel.
 * @size: array size.
 * @value: value looking for.
 * Return: the index of the value if it's found, -1 if not.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	for (idx = 0; array && idx < size; idx++)
	{
		if (array[idx] == value)
		{
			printf("Value checked array[%li] = [%d]\n", idx, array[idx]);
			return (idx);
		}
		else
			printf("Value checked array[%li] = [%d]\n", idx, array[idx]);
	}
	return (-1);
}
