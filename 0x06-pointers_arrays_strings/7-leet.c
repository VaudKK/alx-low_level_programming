#include <ctype.h>
#include <stdio.h>

/**
 * leet - transfrom to 1337
 * @s: string to be converted
 *
 * Return: character pointer
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = {'4', '3', '0', '7', '1'};
	char alpha[] = {'A', 'E', 'O', 'T', 'L', '\0'};

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		while (alpha[j] != '\0')
		{
			if (toupper(s[i]) == alpha[j])
			{
				s[i] = leet[j];
				break;
			}

			j++;
		}

		j = 0;

		i++;
	}

	return (s);
}
