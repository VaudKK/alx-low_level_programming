#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the linked list
 * @head: the head of the linked list
 * @str: the string to be added
 *
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newList = NULL;

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
		newList->next = *head;
		*head = newList;
	}

	return (newList);
}
