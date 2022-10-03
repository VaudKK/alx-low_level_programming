#include <string.h>

/**
 * _strstr - first occurence of the string s
 * @haystack: the string to be checked
 * @needle: the values to be checked against
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned long int i, j, flag;

	for (i = 0; i < strlen(haystack); i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 0;

			for (j = 0; j < strlen(needle); j++)
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 1;
					break;
				}
			}

			if (flag == 0)
			{
				return (&haystack[i]);
			}
		}
	}

	return (0);
}
