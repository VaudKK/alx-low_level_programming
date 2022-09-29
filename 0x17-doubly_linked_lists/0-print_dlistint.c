#include "lists.h"
#include <stdio.h>


/**
 * print_dlistint - prints items in list
 *
 * @h: the list
 *
 * Return: item count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *mylist = h;
	size_t count = 0;

	while (mylist != NULL)
	{
		printf("%d\n", mylist->n);
		count += 1;
		mylist = mylist->next;
	}

	return (count);
}
