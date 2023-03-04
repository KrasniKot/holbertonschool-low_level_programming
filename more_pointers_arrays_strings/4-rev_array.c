#include "main.h"

/**
 * reverse_array - reverses an int array.
 * @a: array.
 * @n: number of elements.
 */
void reverse_array(int *a, int n)
{
	int i, c = 0;

	n -= 1;

	for (i = 0; i < n / 2; i++)
	{
		c = a[n - i];
		a[n - i] = a[i];
		a[i] = c;
	}
}
