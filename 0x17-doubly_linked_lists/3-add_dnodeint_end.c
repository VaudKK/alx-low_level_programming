#include "lists.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * add_dnodeint_end - add new node
 *
 * @head: the list
 * @n: the new value to be added
 *
 * Return: added item
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_item = malloc(sizeof(dlistint_t));
	dlistint_t *current_header = *head;

	if (new_item == NULL)
		return (NULL);

	new_item->n = n;
	new_item->prev = NULL;
	new_item->next = NULL;

	if (*head == NULL)
	{
		*head = new_item;
	}
	else
	{
		while (current_header != NULL)
		{
			if (current_header->next == NULL)
			{
				new_item->prev = current_header;
				current_header->next = new_item;
				break;
			}

			current_header = current_header->next;
		}
	}
	return (new_item);
}
