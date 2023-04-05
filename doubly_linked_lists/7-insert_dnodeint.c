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
	unsigned int i = 0;
	dlistint_t *hc = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	while (i != idx)
	{
		if (!i)
			return (NULL);

		*h = (*h)->next;
		i++;
	}
	new->n = n;
	new->prev = (*h)->prev;
	new->next = (*h)->next;

	(*h)->next = new;
	*h = (*h)->next;
	(*h)->prev = new;

	return (new);
}
