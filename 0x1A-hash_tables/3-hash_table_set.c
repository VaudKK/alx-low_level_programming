#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set - add new item to table
 * @ht: the hash table;
 * @key: the key of the new item
 * @value: the value of the new item
 *
 * Return: 1 if success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	hash_node_t **table;

	if (ht == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	table = ht->array;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;

	if (table[index] != NULL)
	{
		node->next = table[index];
	}

	table[index] = node;
	return (1);
}
