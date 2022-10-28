#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print a hash table
 *
 * @ht: the hashtable to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	array = ht->array;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = array[i];

		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;

			if (temp != NULL)
			{
				printf(", ");
			}
		}
	}

	printf("}\n");
}
