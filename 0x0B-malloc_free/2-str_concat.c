#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - joins two string
 * @s1: first string
 * @s2: second string
 *
 * Return: joined string
 */
char *str_concat(char *s1, char *s2)
{
	char *joined;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	joined = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (joined != NULL)
	{
		strcat(joined, s1);
		strcat(joined, s2);
		return (joined);
	}
	else
	{
		return (NULL);
	}
}
