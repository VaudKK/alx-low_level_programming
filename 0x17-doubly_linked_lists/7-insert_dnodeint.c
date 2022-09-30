#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node at index
 *
 * @h: the list
 * @idx: the index
 * @n: new item
 *
 * Return: created item
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_item =  malloc(sizeof(dlistint_t));
	dlistint_t *head = *h;

	if (new_item == NULL)
		return (NULL);

	new_item->n = n;
	new_item->prev = NULL;
	new_item->next = NULL;

	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new_item->next = head;
				head->prev = new_item;
			}
			else
			{
				head->prev->next = new_item;
				new_item->prev = head->prev;

				new_item->next = head;
				head->prev = new_item;
			}
			return (new_item);
		}
		i++;
		head = head->next;
	}

	return (NULL);
}
