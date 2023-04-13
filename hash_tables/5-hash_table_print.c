#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int s = 1;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				if (!s)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				s = 0;
			}
		}
		printf("}\n");
	}
}
