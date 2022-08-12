#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints a linked lists contents
 * @h: the list
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		len += 1;
		current = current->next;
	}

	return (len);
}
