#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer to a list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
