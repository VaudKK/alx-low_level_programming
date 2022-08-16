#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the first element in the list
 * @head:  the list
 *
 * Return: contents of the removed element
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	listint_t *nextFirst;
	int number;

	if (*head == NULL)
	{
		return (0);
	}

	first = *head;
	nextFirst = (*head)->next;
	number = (*head)->n;
	free(first);
	*head = nextFirst;

	return (number);
}
