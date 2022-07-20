/**
 * _strlen_recursion - print string lenght
 * @s: the string
 *
 * Return - length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}

	len += 1;

	return (len + _strlen_recursion(s + 1));
}
