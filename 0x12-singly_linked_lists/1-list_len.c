#include "lists.h"
#include <stdlib.h>

/**
 * list_len - get the number of elements in a list
 * @h: the list
 *
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len += 1;
		current = current->next;
	}

	return (len);
}
