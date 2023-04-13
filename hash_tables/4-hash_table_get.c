#include "hash_tables.h"

/**
 * *hash_table_get - gets the value of @key.
 * @ht: hash table.
 * @key: key.
 * Return: NULL if it fails, value of key otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;
	hash_node_t *node;

	if (ht && key)
	{
		i = key_index((unsigned char *)key, ht->size);
		node = ht->array[i];
		while (node)
		{
			if (!strcmp(node->key, key))
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
