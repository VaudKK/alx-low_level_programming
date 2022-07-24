/**
 * _islower - checks if a character is lower case
 * @c: the integer value
 *
 * Return: 1 if true 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
