#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of a list.
 * @head: pointer to list.
 * @n: integer.
 * Return: *head.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (*head);
}
