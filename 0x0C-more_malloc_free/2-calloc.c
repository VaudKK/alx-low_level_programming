#include <stdlib.h>

/**
 * _calloc - local implementation of calloc
 * @nmemb: the array to allocate memory to
 * @size: the size to be allocated
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void  *new_array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	new_array = calloc(nmemb, size);

	if (new_array == NULL)
	{
		return (NULL);
	}

	return (new_array);
}
