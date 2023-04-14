#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node, *nnode;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			nnode = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = nnode;
		}
	}

	free(ht->array);
	free(ht);
}
