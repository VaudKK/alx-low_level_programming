/**
 * string_toupper - converts a string to upper
 * @s: string to be converted
 *
 * Return: character pointer
 */
char *string_toupper(char *s)
{
	int i, ascii;

	i = 0;

	while (s[i] != '\0')
	{
		ascii = s[i] + '0';

		if (ascii >= 145 && ascii <= 170)
		{
			s[i] = ascii - 48 - 32;
		}

		i++;
	}

	return (s);
}
