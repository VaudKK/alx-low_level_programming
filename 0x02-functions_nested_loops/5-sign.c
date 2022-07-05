#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the integer
 *
 * Return: 1 if gt zero 0 if n is zero and -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
