/**
 * _isupper - checks if a character is upper case
 * @c: the integer value
 *
 * Return: 1 if true 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
