#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concantenate string
 * @s1: string one
 * @s2: string two
 * @n: size of string of s2
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size = strlen(s1) + 1 + (n * sizeof(char));
	char *new_string;

	if (n >= strlen(s2))
	{
		size = strlen(s1) + 1 + strlen(s2) + 1;
	}

	new_string = (char *)malloc(size);

	if (new_string != NULL)
	{
		strcpy(new_string, s1);
		strncat(new_string, s2, n);
		return (new_string);
	}
	else
	{
		return (NULL);
	}
}
