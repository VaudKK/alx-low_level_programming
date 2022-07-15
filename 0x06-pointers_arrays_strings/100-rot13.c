#include <ctype.h>

/**
 * rot13 - transfrom to rot13
 * @s: string to be converted
 *
 * Return: character pointer
 */
char *rot13(char *s)
{
	int i;
	char c;

	i = 0;

	while (s[i] != '\0')
	{
		if (isalpha(s[i]))
		{
			c = s[i];
			s[i] = c + 13;
		}

		i++;
	}

	return (s);
}
