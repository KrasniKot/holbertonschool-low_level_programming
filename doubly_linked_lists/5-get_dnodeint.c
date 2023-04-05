#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node[@index].
 * @index: index.
 * Return: NULL if the node doesn't exist, otherwise node[@index].
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i != index; i++)
	{
		head = head->next;
	}

	if (!head)
		return (NULL);

	return (head);
}
