#include "hash_tables.h"

/**
 * has_table_get - get value
 *
 * @ht: the hashtable
 * @key: the associated key
 *
 * Return: character
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key = key_index(key, ht->size);
}
