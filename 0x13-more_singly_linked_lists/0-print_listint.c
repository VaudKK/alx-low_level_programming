#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print values in list
 * @h: the list to print
 *
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count += 1;
	}

	return (count);
}
