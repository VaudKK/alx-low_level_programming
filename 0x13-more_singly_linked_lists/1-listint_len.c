#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - print the size of list
 * @h: the list to print
 *
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count += 1;
	}

	return (count);
}
