#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: the list
 * @index: the index
 *
 * Return: item at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}

	return (NULL);
}
