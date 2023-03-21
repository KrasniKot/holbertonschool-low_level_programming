#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given in the array.
 * @array: array.
 * @size: array size.
 * @action: function pointer that executes the function in @array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t r;

	for (r = 0; r < size && array && size && action; r++)
		action(array[r]);
}
