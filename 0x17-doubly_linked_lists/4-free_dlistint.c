#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees list memory
 *
 * @head: the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		head = current->next;
		free(current);
		current = head;
	}
}
