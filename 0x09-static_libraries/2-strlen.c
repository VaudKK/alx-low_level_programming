
/**
 * _strlen -  determine lenght of a string
 * @s: character ponter
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (1)
	{
		if (*(s + len) == '\0')
		{
			break;
		}

		len++;
	}

	return (len);

}
