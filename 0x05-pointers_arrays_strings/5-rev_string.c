#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @str: string to be printed
 */
void rev_string(char *str)
{
	int len, i, j;
	char *original = str;

	len = 0;

	while (1)
	{
		if (*(original + len) == '\0')
		{
			break;
		}

		len++;
	}

	j = 0;

	for (i = len - 1; i >= 0; i--)
	{
		*(str + j) = *(original + i);
		j++;
	}
}
