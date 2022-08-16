#include "lists.h"


/**
 * get_nodeint_at_index - gets the node at specified index
 * @head: the list
 * @index: the specified index
 *
 * Return: node at index n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indices = 0;
	listint_t *requiredNode = NULL;

	while (head != NULL)
	{
		if (index == indices)
		{
			requiredNode = head;
			break;
		}
		head = head->next;
		indices += 1;
	}

	return (requiredNode);
}
