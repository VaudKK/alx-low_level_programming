/**
 * _atoi - convert string to int
 * @s: the string to convert
 *
 *  Return: a number
 */
int _atoi(char *s)
{
	int sign;
	int result;
	int i, difference;

	sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
	}

	i = 0;
	result = 0;
	difference = 0;

	while (s[i] != '\0')
	{
		difference = s[i] - '0';

		if (difference >= 0 && difference <= 9)
		{
			if (s[i - 1] == '-')
			{
				sign = -1;
			}
			else if (s[i - 1] == '+')
			{
				sign = 1; 
			}
			result = (result * 10) + (s[i] - '0');
		}

		i++;
	}

	return (result * sign);
}
