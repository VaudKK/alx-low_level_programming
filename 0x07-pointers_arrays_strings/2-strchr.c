/**
 * _strchr - locates a character in a string
 * @s: the string to be checked
 * @c: the character to be searched
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	char *target = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			target = &s[i];
			break;
		}
	}

	return (target);
}
