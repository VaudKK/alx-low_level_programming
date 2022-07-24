/**
 * _memset - fills the first n bytes
 * @s: the string to be filled
 * @b: bytes to be used to fill
 * @n: the n bytes to fill
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
