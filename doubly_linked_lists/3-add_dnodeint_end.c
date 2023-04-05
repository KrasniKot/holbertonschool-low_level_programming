#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list.
 * @head: pointer to list.
 * @n: integer.
 * Return: NULL if fails, the address of the new node otherwise.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *i = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (i->next)
			i = i->next;
		new->prev = i;
		i->next = new;
	}

	return (new);
}
