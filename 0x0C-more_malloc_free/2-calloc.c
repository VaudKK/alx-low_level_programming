#include <stdlib.h>

/**
 * _calloc - local implementation of calloc
 * @nmemb: the array to allocate memory to
 * @size: the size to be allocated
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	new_array = malloc(nmemb * size);

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		new_array[i] = 0;
	}

	return (new_array);
}
