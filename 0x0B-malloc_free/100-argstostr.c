#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concat all arguments
 * @ac: word count
 * @av: words
 *
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	s = malloc(ac * sizeof(char*));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		s[i] = &av[i];
	}

	return (s);
}
