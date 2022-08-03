#include <stdio.h>

/**
 * array_iterator - work on array elements
 * @array: the array to work on
 * @size: the size of the array
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
