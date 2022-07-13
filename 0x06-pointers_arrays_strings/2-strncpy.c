
/**
 * _strncpy - copies a string
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes to be used for copying
 *
 * Return: character pointer of the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_len;

	i = 0;
	src_len = 0;

	while (1)
	{
		if (src[src_len] == '\0')
		{
			break;
		}

		src_len++;
	}

	while (i != n)
	{
		if (i > src_len)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}

	return (dest);
}
