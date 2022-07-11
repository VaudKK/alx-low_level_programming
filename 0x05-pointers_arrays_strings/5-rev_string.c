#include <stdlib.h>

/**
 * rev_string - reverse a string
 * @str: string to be printed
 */
void rev_string(char *str)
{
	int len, i, j;
	char *original;

	original = malloc(sizeof(char *));

	len = 0;

	while (1)
	{
		if (*(str + len) == '\0')
		{
			break;
		}

		len++;
	}

	j = 0;

	for (i = len - 1; i >= 0; i--)
	{
		*(original + j) = *(str + i);
		j++;
	}

	for (i = 0; i < len; i++)
	{
		*(str + i) = *(original + i);
	}
}
