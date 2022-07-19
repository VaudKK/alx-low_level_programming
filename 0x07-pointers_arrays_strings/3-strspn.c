/**
 * _strspn - gets the number of bytes
 * @s: the string to be checked
 * @accept: the values to be checked against
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				count += 1;
			}
		}
	}

	return (count);
}
