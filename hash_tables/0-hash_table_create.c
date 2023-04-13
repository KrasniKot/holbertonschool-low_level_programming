#include "hash_tables.h"

/**
 * hash_table_create - create a hash table.
 * @size: size.
 * Return: the address of the new hash table or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nht = malloc(sizeof(hash_table_t));
	int i;

	if (!nht)
		return (NULL);

	nht->size = size;
	nht->array = malloc(sizeof(hash_table_t *) * size);

	if (!nht->array)
	{
		free(nht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		nht->array[i] = NULL;

	return (nht);
}
