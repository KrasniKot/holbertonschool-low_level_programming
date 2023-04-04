#include "lists.h"

/**
 * add_node - Adds a node at the beginning of a list_t list.
 * @head: pointer to list.
 * @str: array.
 * Return: The adress of the new element or NULL if fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newn = malloc(sizeof(list_t));
	int i = 0;

	while (str[i])
		i++;

	if (!newn)
		return (NULL);

	newn->str = strdup(str);
	newn->len = i;
	newn->next = *head;
	*head = newn;

	return (*head);
}
