#include "main.h"


void reverse(char *str, int len)
{
	int j, i;
	char s[len];

	j = 0;

	for (i = len - 1; i >= 0; i--)
	{
		s[j] = *(str + i);
		j++;
	}

	str = s;
}

/**
 * rev_string - reverse a string
 * @str: string to be printed
 */
void rev_string(char *str)
{
	int len;

	len = 0;

	while (1)
	{
		if (*(str + len) == '\0')
		{
			break;
		}

		len++;
	}

	reverse(str,len - 1);
}
