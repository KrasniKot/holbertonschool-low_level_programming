#include "lists.h"

/**
 * sum_dlistint - adds the integers of a list.
 * @head: pointer to function.
 * Return: adition of all numbers.
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
