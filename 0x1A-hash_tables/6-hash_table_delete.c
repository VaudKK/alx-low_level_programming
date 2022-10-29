#include "hash_tables.h"
#include <stdlib.h>


/**
 * hash_table_delete - delete hash table
 * @ht: the hash table to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array, *temp, *to_delete;
	unsigned long int i;

	if (ht == NULL)
		return;

	array = ht->array;

	for (i = 0; i < ht->size; i++)
	{
		temp = array[i];
		if (temp != NULL && temp->next != NULL)
		{
			temp = temp->next;

			while (temp != NULL)
			{
				to_delete = temp;
				temp = temp->next;
				free(to_delete);
			}
		}
		if (array[i] != NULL)
			free(array[i]);
	}

	free(array);
	free(ht);
}
