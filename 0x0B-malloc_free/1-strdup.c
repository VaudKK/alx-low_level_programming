#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies a string
 * @str: the string to be copied
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *newstr =  (char *)malloc(sizeof(char) * strlen(str));

	if (str == NULL)
		return (NULL);

	strcpy(newstr, str);

	return (newstr);
}
