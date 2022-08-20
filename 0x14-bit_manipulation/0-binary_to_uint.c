#include <string.h>

/**
 * raise_to_power - raise to power of power with base 2
 * @power: the power to raise to
 *
 * Return: number
 */
unsigned int raise_to_power(unsigned int power)
{
	unsigned int i = 1;
	unsigned int result = 1;

	if (power == 0)
	{
		return (1);
	}

	while (i <= power)
	{
		result *= 2;
		i++;
	}

	return (result);
}

/**
 * check_occurrence - check how many times b occurred
 * @b: the string to be evaluated
 *
 * Return: count
 */
int check_occurrence(const char *b)
{
	int count = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] < 48 || b[i] > 49)
			count += 1;

		i++;
	}

	return (count);
}


/**
 * binary_to_uint - converts binary to uint
 * @b: string binary representation
 *
 * Return: uint value
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	int i;
	unsigned int j;
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	if (check_occurrence(b) >  0)
		return (0);

	len = strlen(b);
	j = 0;

	for (i = len - 1; i >= 0; i--, j++)
	{
		if (b[i] == '1')
		{
			value += raise_to_power(j);
		}
	}

	return (value);
}
