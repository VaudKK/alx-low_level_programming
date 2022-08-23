#include "main.h"

/**
 * raised - raises two to a defined power
 * @power: the power
 *
 * Return: the raised value of 2
 */
unsigned long int raised(int power)
{
	unsigned long int result = 1;
	int pow = 1;

	if (power == 0)
		return (1);

	while (pow <= power)
	{
		result *= 2;
		pow++;
	}

	return (result);
}


/**
 * print_binary - converts decima to binary
 * @n: the number to be converted
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int power_of_two = 1;
	int power = 0;
	unsigned long int remainder;

	while (n > power_of_two)
	{
		if (power_of_two * 2 > n)
			break;

		power_of_two *= 2;
		power++;
	}

	remainder = n;
	while (power > -1)
	{
		if (remainder >= power_of_two)
		{
			remainder -= power_of_two;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		power_of_two = raised(--power);
	}
}
