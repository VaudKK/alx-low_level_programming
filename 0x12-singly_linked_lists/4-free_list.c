#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free all memory allocated
 * @head: the list to free
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(next);
}
