#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the linked list
 * @head: the head of the linked list
 * @n: the number to be added
 *
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newList = NULL;
	listint_t *lastNode = NULL;

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
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newList;
	}

	return (newList);
}
