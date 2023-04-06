#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node[index].
 * @head: pointer to list.
 * @index: index.
 * Return: -1 if it fails or 1 (success).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hc = *head;

	if (!*head)
		return (-1);

	for (; index != 0; index--)
	{
		if (!hc)
			return (-1);
		hc = hc->next;
	}

	if (!hc->prev)
	{
		hc = hc->next;
		if (hc)
			hc->prev = NULL;
	}
	else
	{
		hc->prev->next = hc->next;
		if (hc->next)
			hc->next->prev = hc->prev;
	}

	free(hc);
	return (1);
}
