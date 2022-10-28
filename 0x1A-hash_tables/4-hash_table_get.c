#include "hash_tables.h"
#include <stddef.h>

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
	unsigned long int index;
	hash_node_t **array;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;

	if (array[index] != NULL)
	{
		return (array[index]->value);
	}

	return (NULL);
}
