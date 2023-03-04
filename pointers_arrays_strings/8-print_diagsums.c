#include <stdio.h>

/**
 * print_diagsums - prints the diagonal sum of a matrix.
 * @a: array.
 * @size: array size.
 */
void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;


	for (i = 0; i < size; i++)
	{
		n1 += a[(size + 1) * i];
		n2 += a[(size - 1) * (i + 1)];
	}
	printf("%d ,%d\n", n1, n2);
}
