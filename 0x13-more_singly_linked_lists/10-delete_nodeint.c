#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at the specified index
 * @head: the ilst
 * @index: the index to be  delted
 *
 * Return: 1 if success -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int currentIndex = 0;
	listint_t *previous = NULL;
	listint_t *currentlist = NULL;

	previous = malloc(sizeof(listint_t));

	if (previous == NULL)
		return (-1);

	currentlist = malloc(sizeof(listint_t));
	if (currentlist == NULL)
		return (-1);

	currentlist = *head;

	while (currentlist != NULL)
	{
		if (currentIndex + 1 == index)
			previous = currentlist;

		if (currentIndex == index)
		{
			if (currentIndex == 0)
			{
				*head = (*head)->next;
			}
			else
			{
				previous->next = currentlist->next;
			}
			free(currentlist);
			return (1);
		}
		currentlist = currentlist->next;
		currentIndex += 1;
	}
	free(currentlist);
	free(previous);
	return (-1);
}
