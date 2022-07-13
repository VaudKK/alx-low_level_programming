
/**
 * _strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes to be used for concatenation
 *
 * Return: character pointer of the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (1)
	{
		if (dest[i] == '\0')
		{
			break;
		}

		i++;
	}

	while (j != n)
	{
		if (src[j] == '\0')
			break;

		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
