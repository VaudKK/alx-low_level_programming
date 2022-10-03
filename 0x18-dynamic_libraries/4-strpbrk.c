/**
 * _strpbrk - first occurence of the string s
 * @s: the string to be checked
 * @accept: the values to be checked against
 *
 * Return: poinrter
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = &s[i];
				return (found);
			}
		}
	}

	return (found);
}
