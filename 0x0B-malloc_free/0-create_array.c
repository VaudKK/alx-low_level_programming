#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array
 * @size: the array size
 * @c: the character to initialize the array
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *myarray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	myarray = (char *)malloc(sizeof(char) * size);

	if (myarray != NULL)
	{
		for (i = 0; i < size; i++)
			myarray[i] = c;
	}

	return (myarray);
}
