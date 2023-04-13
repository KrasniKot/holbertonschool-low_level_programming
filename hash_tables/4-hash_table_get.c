#include "hash_tables.h"

/**
 * *hash_table_get - gets the value of @key.
 * @ht: hash table.
 * @key: key.
 * Return: NULL if it fails, value of key otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i = key_index((unsigned char *)key, ht->size);

	while (ht && key && ht->array[i])
	{
		if (!strcmp(ht->array[i]->key, key))
		{
			return (ht->array[i]->value);
		}
		i++;
	}
	return (NULL);
}
