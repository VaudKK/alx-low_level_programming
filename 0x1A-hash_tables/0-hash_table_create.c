#include "hash_tables.h"
#include <stdlib.h>


/**
 * hash_table_create -  creates hashtable
 * @size: the size of the table
 * Return: pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size =  size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	return (table);
}
