#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value.
 * Return: 0 if it fails, 1 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t)), *c;
	int i = key_index((unsigned char *)key, ht->size);

	if (!new || !ht || !key || !value)
		return (0);

	if (ht->array[i])
	{
		c = ht->array[i];
		while (c)
		{
			if (strcmp(key, c->key))
			{
				free(c->value);
				c->value = strdup(value);
				return (1);
			}
			c = c->next;
		}
	}

	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);

}
