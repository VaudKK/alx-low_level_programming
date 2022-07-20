#include <string.h>

/**
 * _strspn - gets the number of bytes
 * @s: the string to be checked
 * @accept: the values to be checked against
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;
	int flag;
	unsigned int count = 0;

	flag = 0;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			flag = 0;
			if (accept[j] == s[i])
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
		{
			count++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
