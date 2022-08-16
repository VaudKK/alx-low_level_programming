#include "lists.h"


/**
 * sum_listint - sums values in the list
 * @head: the list
 *
 * Return: the sum of values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
