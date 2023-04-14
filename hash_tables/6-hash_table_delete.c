#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *htc = ht;
	hash_node_t *node, *nnode;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
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
	}

	free(htc->array);
	free(htc);
}
