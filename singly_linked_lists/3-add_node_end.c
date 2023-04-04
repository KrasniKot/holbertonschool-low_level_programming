#include "lists.h"

/**
 * add_node_end - Adds a node at the end of the list.
 * @head: pointer to list.
 * @str: array.
 * Return: The address of the new last element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn = malloc(sizeof(list_t));
	list_t *pti = *head;
	int i = 0;

	if (!newn)
		return (NULL);

	while (str[i])
		i++;

	newn->str = strdup(str);
	newn->len = i;
	newn->next = NULL;

	if (!*head)
	{
		*head = newn;
		return (*head);
	}

	while (pti->next)
	{
		pti = pti->next;
	}

	pti->next = newn;

	return (newn);
}
