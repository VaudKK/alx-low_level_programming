#include "hash_tables.h"

/**
 * key_index - get the index from a hash
 * @key: the key of the hash
 * @size: the size of the table
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2((unsigned char *)s);

	return (hash % size);
}
