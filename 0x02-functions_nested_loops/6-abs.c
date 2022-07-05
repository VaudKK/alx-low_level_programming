/**
 * _abs - gets the absolute value of a number
 * @n: the integer
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	int new_value;

	if (n < 0)
	{
		new_value = n * -1;
		return (new_value);
	}

	return (n);
}
