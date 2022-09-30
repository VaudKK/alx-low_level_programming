#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - insert node at index
 *
 * @head: the list
 * @index: the index
 *
 * Return: 1 if success zero otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (current == NULL)
		return (-1);

	while (current != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				(*head) = (*head)->next;
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}

			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}

	return (-1);
}
