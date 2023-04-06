#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at the index @idx.
 * @h: pointer to list.
 * @idx: index.
 * @n: integer.
 * Return: the address of the new node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *hc = *h;

	if (!idx)
		return (add_dnodeint(h, n));

	for (; idx > 1; idx--)
	{
		hc = hc->next;
		if (!hc)
			return (NULL);
	}

	if (!new)
		return (NULL);

	if (!hc->next)
		return (add_dnodeint_end(h, n));

	new->n = n;
	new->prev = hc;
	new->next = hc->next;
	hc->next->prev = new;
	hc->next = new;

	return (new);
}
