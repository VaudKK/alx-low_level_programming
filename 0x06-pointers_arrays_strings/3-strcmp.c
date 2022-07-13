
/**
 * _strcmp - compares strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if equal postive
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;

	while (1)
	{
		if (s1[i] == '\0')
			break;

		diff = (s1[i] + '0') - (s2[i] + '0');

		if (diff  > 0 || diff < 0)
			break;

		i++;
	}

	return (diff);
}
