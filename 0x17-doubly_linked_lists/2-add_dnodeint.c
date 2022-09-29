#include "lists.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * add_dnodeint - add new node
 *
 * @head: the list
 * @n: the new value to be added
 *
 * Return: added item
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_item = malloc(sizeof(dlistint_t));
	dlistint_t *current_head = *head;

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
		new_item->next = current_head;
		current_head->prev = new_item;

		*head = new_item;
	}
	return (new_item);
}
