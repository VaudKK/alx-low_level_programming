#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a node to the linked list
 * @head: the head of the linked list
 * @str: the string to be added
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newList = NULL;
	list_t *lastNode = NULL;

	newList = malloc(sizeof(list_t));

	if (newList == NULL)
		return (NULL);

	newList->str = strdup(str);
	newList->len = strlen(str);
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
