/**
 * _isalpha - checks for alphabetic character
 * @c: the integer value of the character
 *
 * Return: 1 if true 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);

	return (0);
}
