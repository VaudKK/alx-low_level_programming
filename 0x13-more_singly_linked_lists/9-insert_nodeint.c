#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: the list
 * @idx: the index to insert in
 * @n: number to be inserted
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL;
	listint_t *previousNode = NULL;
	listint_t *currentList = NULL;
	unsigned int index = 0;

	if (*head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	previousNode = malloc(sizeof(listint_t));

	if (previousNode == NULL)
		return (NULL);

	currentList = malloc(sizeof(listint_t));

	if (currentList == NULL)
		return (NULL);

	currentList = *head;
	newNode->n = n;
	while (currentList != NULL)
	{
		if (index + 1 == idx)
			previousNode = currentList;

		if (index == idx)
		{
			previousNode->next = newNode;
			newNode->next = currentList;
			break;
		}
		currentList = currentList->next;
		index += 1;
	}
	return (newNode);
}
