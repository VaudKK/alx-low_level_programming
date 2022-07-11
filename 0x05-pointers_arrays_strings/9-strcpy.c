#include <stdio.h>

/**
 * _strcpy- copies a string from source to destination
 * @dest: the desination
 * @src: the source
 *
 * Return: pointer to the copied destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *temp = src;

	*dest = *temp;

	i = 0;

	while (1)
	{
		*(dest + i) = *(temp + i);

		if (*(src + i) == '\0')
		{
			break;
		}

		i++;
	}

	return (dest);
}
