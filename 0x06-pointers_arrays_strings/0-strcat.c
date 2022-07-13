
/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: character pointer of the concatenated string
 */
char *_strcat(char *dest, char *src)
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

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
