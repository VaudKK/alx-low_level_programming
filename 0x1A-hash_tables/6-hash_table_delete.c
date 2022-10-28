#include "hash_tables.h"
#include <stdlib.h>


/**
 *
 * hash_table_delete - delete hash table
 * @ht: the hash table to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t **arr;
	unsigned long int i;

	if (ht != NULL)
	{
		arr = ht->array;
		
		for (i = 0; i < ht->size; i++)
		{
			if (arr[i] != NULL)
			{
				temp = arr[i];
				if (temp->next != NULL)
				{

				}
				free(temp);
			}
		}
	}
}
