#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: pointer to a list.
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	int nc = 0;

	while (h)
	{
		h = h->next;
		nc++;
	}
	return (nc);
}
