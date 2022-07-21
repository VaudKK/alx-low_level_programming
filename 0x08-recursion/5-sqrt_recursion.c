

/**
 * sqrt_helper - helps sqrt recursion
 * @n: number
 * @guess: guess
 *
 * Return: sqrt
 */
int sqrt_helper(int n, int guess)
{
	if (guess > n)
		return (-1);

	if (guess * guess  == n)
	{
		return (guess);
	}
	else
	{
		guess += 1;
		return (sqrt_helper(n, guess));
	}
}

/**
 * _sqrt_recursion - get the squareroot
 * @n: number to find sqrt
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	if (n == 0)
		return (0);

	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 2));
}
