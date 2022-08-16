#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free all memory allocated
 * @head: the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
