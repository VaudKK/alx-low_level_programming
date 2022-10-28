#include "hash_tables.h"

/**
 * hash_table_get - get value
 *
 * @ht: the hashtable
 * @key: the associated key
 *
 * Return: character
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key;
	hash_node_t **array;

	if (ht == NULL || key == NULL)
		return (NULL);

	key = key_index(key, ht->size);
	array = ht->array;

	if (array[key] != NULL)
	{
		return (array[key]->value);
	}

	return (NULL);
}
