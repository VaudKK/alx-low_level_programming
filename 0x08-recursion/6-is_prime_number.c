/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if true 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		return (0);
	}

	return (is_prime_number(n / 2));
}
