/**
 * cap_string - capitalizes every word of a string
 * @s: string to be converted
 *
 * Return: character pointer
 */
char *cap_string(char *s)
{
	int i, ascii;
	char prev;

	i = 0;

	while (s[i] != '\0')
	{
		ascii = s[i] + '0';
		prev = s[i - 1];

		if (ascii >= 145 && ascii <= 170)
		{
			if (prev == ' ' || prev == '\t' || prev == '\n' || prev == '.')
			{
				s[i] = ascii - 48 - 32;
			}
		}

		i++;
	}

	return (s);
}
