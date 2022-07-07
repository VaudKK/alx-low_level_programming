#include "main.h"

/**
 * more_numbers - print numbers 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j, ones, tens;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				tens = j / 10;
				ones = j % 10;

				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}

		_putchar('\n');
	}
}
