#include "main.h"

/**
 * times_table - prints times table
 *
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	int tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if ( j > 0 && j < 10)
			{
				_putchar(44);
				_putchar(32);

				if (product < 10)
				{
					_putchar(32);
				}
			}

			if (product > 9)
			{
				tens = product / 10;
				ones = product % 10;

				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(product + '0');
			}
		}

		_putchar('\n');
	}
}
