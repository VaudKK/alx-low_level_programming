#include "main.h"

/**
 *print_number - handles printing a number to console
 *@number: the number to be printed
 */
void print_number(int number)
{
	int ones, tens, hundreds, actual_number;

	actual_number = number;

	if (number < 0)
	{
		number *= -1;
	}

	if (number > 99)
	{
		hundreds = number / 100;
		tens = (number / 10) % 10;
		ones = number % 10;

		_putchar(hundreds + '0');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else if (number > 9)
	{
		tens = number / 10;
		ones = number % 10;

		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else
	{
		_putchar(number + '0');
	}

	if (actual_number != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}


/**
 * print_to_98 - prints numbers down to or up to 98
 * @n: number
 *
 */
void print_to_98(int n)
{
	int number;

	number = n;

	if (number > 98)
	{
		while (number >= 98)
		{
			print_number(number);
			number--;
		}
	}
	else
	{
		while (number <= 98)
		{
			if (number < 0)
			{
				_putchar('-');
				print_number(number);
			}
			else
			{
				print_number(number);
			}

			number++;
		}
	}

	_putchar('\n');
}
