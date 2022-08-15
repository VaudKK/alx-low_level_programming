#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node to the linked list
 * @head: the head of the linked list
 * @n: the number to be added
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newList = NULL;

	newList = malloc(sizeof(listint_t));

	if (newList == NULL)
		return (NULL);

	newList->n = n;
	newList->next = NULL;

	if (*head == NULL)
	{
		*head = newList;
	}
	else
	{
		newList->next = *head;
		*head = newList;
	}

	return (newList);
}
