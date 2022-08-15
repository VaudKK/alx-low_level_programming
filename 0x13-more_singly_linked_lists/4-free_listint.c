#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free all memory allocated
 * @head: the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(next);
}
