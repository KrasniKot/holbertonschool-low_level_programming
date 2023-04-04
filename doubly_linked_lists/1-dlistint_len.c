#include "lists.h"

/**
 * dlistint_len - returns the lenght of a list.
 * @h: pointer to list.
 * Return: lenght.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
