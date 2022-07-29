#include <stdlib.h>

/**
 * malloc_checked - returns allocated memory pointer
 * @b: the size of the memory
 *
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem_loc = malloc(b);

	if (mem_loc == NULL)
	{
		exit(98);
	}

	return (mem_loc);
}
