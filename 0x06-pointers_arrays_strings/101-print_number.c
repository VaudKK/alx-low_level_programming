#include "main.h"


/**
 *nthdigit - prints the nth digit
 *@n: the position of the digit in the number
 *@k: the number
 *
 */
void nthdigit(int n, int k)
{
	while (n--)
	{
		k /= 10;
	}

	_putchar((k % 10) + '0');
}

/**
 * print_number - prints and integer
 * @n: the integer to be printed
 *
 */
void print_number(int n)
{
	int digits, i, k;

	if (n == 0)
	{
		_putchar('0');
	}

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	digits = 0;
	k = n;

	while (k != 0)
	{
		k /= 10;
		digits++;
	}

	for (i = digits - 1; i >= 0; i--)
	{
		nthdigit(i, n);
	}
}
