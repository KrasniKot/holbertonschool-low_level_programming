#include "search_algos.h"

/**
 * bsearch - looks for a value in an array using binary search.
 * @array: array to travel.
 * @left: beginning of the array.
 * @right: end of the array.
 * @value: value looking for.
 * Return: index of the value, -1 if it fails.
 */
int bsearch(int *array, int left, int right, int value)
{
	int i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);

	if (array[i] > value)
		return (bsearch(array, left, i - 1, value));

	return (bsearch(array, i + 1, right, value));
}

/**
 * binary_search - calls to bsearch.
 * @array: array to travel.
 * @size: size of the array.
 * @value: value to look for.
 * Return: bsearch.
 */
int binary_search(int *array, size_t size, int value)
{

	if (!array)
		return (-1);
	return (bsearch(array, 0, size - 1, value));
}
