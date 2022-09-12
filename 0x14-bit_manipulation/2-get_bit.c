#include "main.h"
#include <stdlib.h>

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
 * to_binary_string - converts decima to binary
 * @n: the number to be converted
 *
 * Return: Array of integers
 */
int *to_binary_string(unsigned long int n)
{
	unsigned long int power_of_two = 1;
	int power = 0;
	unsigned long int remainder;
	int *binary_values = malloc(sizeof(int) * 100);
	int i = 0;

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
			binary_values[i] = 1;
		}
		else
		{
			binary_values[i] = 0;
		}
		i++;
		power_of_two = raised(--power);
	}
	binary_values[i + 1] = -1;
	return (binary_values);
}

/**
 * get_bit - get the current bit at index
 * @n: the number
 * @index: the specified index
 *
 * Return: bit value 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int *binaries = to_binary_string(n);
	int total_bits = 0;
	int i = 0;
	int reversed[100];

	while (binaries[i] != -1)
	{
		total_bits += 1;
		i++;
	}

	total_bits -= 1;
	i = 0;
	while (total_bits >= 0)
	{
		reversed[i] = binaries[total_bits - 1];
		total_bits--;
		i++;
	}

	free(binaries);
	return (reversed[index]);
}
