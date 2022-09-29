#include "lists.h"


/**
 * dlistint_len - list len
 *
 * @h: the list
 *
 * Return: item count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *mylist = h;
	size_t count = 0;

	while (mylist != NULL)
	{
		count += 1;
		mylist = mylist->next;
	}

	return (count);
}
