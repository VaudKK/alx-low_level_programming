#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - performs a linear search
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: factorial
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}

	return (-1);
}
